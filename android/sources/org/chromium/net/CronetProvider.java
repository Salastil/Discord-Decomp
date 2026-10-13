package org.chromium.net;

import a3.e;
import android.content.Context;
import android.util.Log;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import org.chromium.net.CronetEngine;

/* loaded from: classes.dex */
public abstract class CronetProvider {
    private static final String GMS_CORE_CRONET_PROVIDER_CLASS = "com.google.android.gms.net.GmsCoreCronetProvider";
    private static final String JAVA_CRONET_PROVIDER_CLASS = "org.chromium.net.impl.JavaCronetProvider";
    private static final String NATIVE_CRONET_PROVIDER_CLASS = "org.chromium.net.impl.NativeCronetProvider";
    private static final String PLAY_SERVICES_CRONET_PROVIDER_CLASS = "com.google.android.gms.net.PlayServicesCronetProvider";
    public static final String PROVIDER_NAME_APP_PACKAGED = "App-Packaged-Cronet-Provider";
    public static final String PROVIDER_NAME_FALLBACK = "Fallback-Cronet-Provider";
    private static final String RES_KEY_CRONET_IMPL_CLASS = "CronetProviderClassName";
    private static final String TAG = "CronetProvider";
    protected final Context mContext;

    public CronetProvider(Context context) {
        if (context == null) {
            throw new IllegalArgumentException("Context must not be null");
        }
        this.mContext = context;
    }

    private static boolean addCronetProviderFromResourceFile(Context context, lt.b bVar, Set<c> set) {
        int identifier = context.getResources().getIdentifier(RES_KEY_CRONET_IMPL_CLASS, "string", context.getPackageName());
        boolean z5 = false;
        if (identifier == 0) {
            return false;
        }
        String string = context.getString(identifier);
        if (string != null && !string.equals(PLAY_SERVICES_CRONET_PROVIDER_CLASS) && !string.equals(GMS_CORE_CRONET_PROVIDER_CLASS) && !string.equals(JAVA_CRONET_PROVIDER_CLASS) && !string.equals(NATIVE_CRONET_PROVIDER_CLASS)) {
            z5 = true;
            if (!addCronetProviderImplByClassName(context, string, bVar, set, true)) {
                Log.e(TAG, "Unable to instantiate Cronet implementation class " + string + " that is listed as in the app string resource file under CronetProviderClassName key");
            }
        }
        return z5;
    }

    private static boolean addCronetProviderImplByClassName(Context context, String str, lt.b bVar, Set<c> set, boolean z5) {
        try {
            Constructor constructor = context.getClassLoader().loadClass(str).asSubclass(CronetProvider.class).getConstructor(Context.class);
            c cVar = new c();
            cVar.a = (CronetProvider) constructor.newInstance(context);
            cVar.f16187b = bVar;
            set.add(cVar);
            return true;
        } catch (ClassNotFoundException e9) {
            logReflectiveOperationException(str, z5, e9);
            return false;
        } catch (IllegalAccessException e10) {
            logReflectiveOperationException(str, z5, e10);
            return false;
        } catch (InstantiationException e11) {
            logReflectiveOperationException(str, z5, e11);
            return false;
        } catch (NoSuchMethodException e12) {
            logReflectiveOperationException(str, z5, e12);
            return false;
        } catch (InvocationTargetException e13) {
            logReflectiveOperationException(str, z5, e13);
            return false;
        }
    }

    public static List<c> getAllProviderInfos(Context context) {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        addCronetProviderFromResourceFile(context, lt.b.f14263d, linkedHashSet);
        lt.b bVar = lt.b.f14265i;
        addCronetProviderImplByClassName(context, PLAY_SERVICES_CRONET_PROVIDER_CLASS, bVar, linkedHashSet, false);
        addCronetProviderImplByClassName(context, GMS_CORE_CRONET_PROVIDER_CLASS, bVar, linkedHashSet, false);
        addCronetProviderImplByClassName(context, NATIVE_CRONET_PROVIDER_CLASS, lt.b.f14264e, linkedHashSet, false);
        addCronetProviderImplByClassName(context, JAVA_CRONET_PROVIDER_CLASS, lt.b.f14266v, linkedHashSet, false);
        return Collections.unmodifiableList(new ArrayList(linkedHashSet));
    }

    public static List<CronetProvider> getAllProviders(Context context) {
        ArrayList arrayList = new ArrayList();
        Iterator<c> it = getAllProviderInfos(context).iterator();
        while (it.hasNext()) {
            arrayList.add(it.next().a);
        }
        return Collections.unmodifiableList(arrayList);
    }

    private static void logReflectiveOperationException(String str, boolean z5, Exception exc) {
        if (z5) {
            Log.e(TAG, "Unable to load provider class: " + str, exc);
            return;
        }
        String str2 = TAG;
        if (Log.isLoggable(str2, 3)) {
            Log.d(str2, "Tried to load " + str + " provider class but it wasn't included in the app classpath");
        }
    }

    public abstract CronetEngine.Builder createBuilder();

    public abstract String getName();

    public abstract String getVersion();

    public abstract boolean isEnabled();

    public String toString() {
        String name = getClass().getName();
        String name2 = getName();
        String version = getVersion();
        boolean isEnabled = isEnabled();
        StringBuilder t5 = e.t("[class=", name, ", name=", name2, ", version=");
        t5.append(version);
        t5.append(", enabled=");
        t5.append(isEnabled);
        t5.append("]");
        return t5.toString();
    }
}
