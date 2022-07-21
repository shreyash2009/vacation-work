import React, {useState,useContext, createContext} from 'react';
const AppContext = createContext();             //created a context which we gonna use to provide values 

 export const AppProvider = ({children})=>{                                 //we are goinng to refer AppProvider as context by which whichever components are under the AppProvider component(context) wil have the access to all the values which are defined in AppProvider function 
    const [isSidebarOpen, setIsSidebarOpen] = useState(true);
    const [isSubmenuOpen, setIsSubmenuOpen] = useState(true);

    const openSidebar = ()=>{
        setIsSidebarOpen(true);
    }
    const openSubmenu = ()=>{
        setIsSubmenuOpen(true);
    }
    const closeSidebar = ()=>{
        setIsSidebarOpen(false);
    }
    const closeSubmenu = ()=>{
        setIsSubmenuOpen(false);
    }
    return(
        <AppContext.Provider value={{isSidebarOpen,
            openSidebar,
            closeSidebar,                                                 //we need to pass the values
            isSubmenuOpen,
            openSubmenu,
            closeSubmenu}}
            >{children}
        </AppContext.Provider>
    )
}
export const useGlobalContext = () => {                                 //Created Custom hook here which will work same
    return useContext(AppContext);
  };
  