package com.swmansion.reanimated;

import android.util.Log;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.fabric.FabricUIManager;
import com.facebook.react.uimanager.UIManagerHelper;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

/* loaded from: classes3.dex */
class ReaCompatibility {
    private FabricUIManager fabricUIManager;
    private Object mountingManager;
    private Method updatePropsSynchronouslyMethod;

    public ReaCompatibility(ReactApplicationContext reactApplicationContext) {
        this.fabricUIManager = (FabricUIManager) UIManagerHelper.getUIManager(reactApplicationContext, 2);
    }

    private Object getMountingManager() {
        if (this.mountingManager == null && this.fabricUIManager != null) {
            try {
                Field declaredField = FabricUIManager.class.getDeclaredField("mMountingManager");
                declaredField.setAccessible(true);
                this.mountingManager = declaredField.get(this.fabricUIManager);
            } catch (Exception e9) {
                Log.w("Reanimated", "Unable to resolve MountingManager via reflection", e9);
            }
        }
        return this.mountingManager;
    }

    private Method getUpdatePropsSynchronouslyMethod(Object obj) {
        if (this.updatePropsSynchronouslyMethod == null && obj != null) {
            Method[] methods = obj.getClass().getMethods();
            int length = methods.length;
            int i5 = 0;
            while (true) {
                if (i5 >= length) {
                    break;
                }
                Method method = methods[i5];
                if (method.getName().startsWith("updatePropsSynchronously") && method.getParameterTypes().length == 2) {
                    method.setAccessible(true);
                    this.updatePropsSynchronouslyMethod = method;
                    break;
                }
                i5++;
            }
        }
        return this.updatePropsSynchronouslyMethod;
    }

    public void registerFabricEventListener(NodesManager nodesManager) {
        FabricUIManager fabricUIManager = this.fabricUIManager;
        if (fabricUIManager != null) {
            fabricUIManager.getEventDispatcher().addListener(nodesManager);
        }
    }

    public void synchronouslyUpdateUIProps(int i5, ReadableMap readableMap) {
        if (this.fabricUIManager == null) {
            return;
        }
        Object mountingManager = getMountingManager();
        Method updatePropsSynchronouslyMethod = getUpdatePropsSynchronouslyMethod(mountingManager);
        if (mountingManager == null || updatePropsSynchronouslyMethod == null) {
            this.fabricUIManager.synchronouslyUpdateViewOnUIThread(i5, readableMap);
            return;
        }
        try {
            updatePropsSynchronouslyMethod.invoke(mountingManager, Integer.valueOf(i5), readableMap);
        } catch (Exception e9) {
            Log.w("Reanimated", "synchronouslyUpdateUIProps failed for tag " + i5, e9);
        }
    }

    public void unregisterFabricEventListener(NodesManager nodesManager) {
        FabricUIManager fabricUIManager = this.fabricUIManager;
        if (fabricUIManager != null) {
            fabricUIManager.getEventDispatcher().removeListener(nodesManager);
        }
    }
}
