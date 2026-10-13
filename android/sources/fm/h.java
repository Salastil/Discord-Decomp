package fm;

import android.util.Log;
import app.rive.runtime.kotlin.core.Rive;
import com.facebook.react.BaseReactPackage;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.module.model.ReactModuleInfoProvider;
import com.rive.RiveViewManager;
import java.util.ArrayList;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h extends BaseReactPackage {
    static {
        if (nf.e.f15425c) {
            return;
        }
        try {
            Log.i("riveOnLoad", "Loading rive C++ library...");
            System.loadLibrary("rive");
            Log.i("riveOnLoad", "Successfully loaded rive C++ library!");
            nf.e.f15425c = true;
        } catch (Error e9) {
            Log.e("riveOnLoad", "Failed to load rive C++ library! Is it properly installed and linked? Is the name correct? (see `CMakeLists.txt`, at `add_library(...)`)", e9);
            throw e9;
        }
    }

    @Override // com.facebook.react.BaseReactPackage, com.facebook.react.ReactPackage
    public final List createViewManagers(ReactApplicationContext ctx) {
        Intrinsics.checkNotNullParameter(ctx, "reactContext");
        synchronized (g.a) {
            Intrinsics.checkNotNullParameter(ctx, "ctx");
            Intrinsics.checkNotNullParameter(ctx, "ctx");
            g.f8781d = ctx.getApplicationContext();
            if (!g.f8779b) {
                try {
                    Rive.init$default(Rive.INSTANCE, ctx, null, 2, null);
                    g.f8779b = true;
                    g.f8780c = null;
                } catch (Throwable th2) {
                    g.f8780c = g.a(th2);
                    Log.e("RiveInitializer", "Auto-init failed: " + g.f8780c, th2);
                }
            }
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(new RiveViewManager());
        return arrayList;
    }

    @Override // com.facebook.react.BaseReactPackage, com.facebook.react.ReactPackage
    public final NativeModule getModule(String name, ReactApplicationContext reactContext) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return null;
    }

    @Override // com.facebook.react.BaseReactPackage
    public final ReactModuleInfoProvider getReactModuleInfoProvider() {
        return new cl.b(4);
    }
}
