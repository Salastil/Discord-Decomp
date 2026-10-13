package androidx.appcompat.app;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.res.Configuration;
import android.os.Bundle;
import android.util.Log;
import android.view.MenuInflater;
import android.view.View;
import android.view.ViewGroup;
import androidx.appcompat.view.ActionMode;
import androidx.appcompat.widget.Toolbar;
import androidx.core.os.LocaleListCompat;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import f4.l;
import f4.n;
import i.c0;
import i.d0;
import io.sentry.hints.j;
import java.lang.ref.WeakReference;
import s.f;

/* loaded from: classes.dex */
public abstract class AppCompatDelegate {

    /* renamed from: d, reason: collision with root package name */
    public static final l f760d = new l(new n(1));

    /* renamed from: e, reason: collision with root package name */
    public static int f761e = -100;

    /* renamed from: i, reason: collision with root package name */
    public static LocaleListCompat f762i = null;

    /* renamed from: v, reason: collision with root package name */
    public static LocaleListCompat f763v = null;

    /* renamed from: w, reason: collision with root package name */
    public static Boolean f764w = null;

    /* renamed from: x, reason: collision with root package name */
    public static boolean f765x = false;

    /* renamed from: y, reason: collision with root package name */
    public static final f f766y = new f(0);
    public static final Object E = new Object();
    public static final Object F = new Object();

    public static void A(int i5) {
        if (i5 != -1 && i5 != 0 && i5 != 1 && i5 != 2 && i5 != 3) {
            Log.d("AppCompatDelegate", "setDefaultNightMode() called with an unknown mode");
            return;
        }
        if (f761e != i5) {
            f761e = i5;
            synchronized (E) {
                try {
                    f fVar = f766y;
                    fVar.getClass();
                    s.a aVar = new s.a(fVar);
                    while (aVar.hasNext()) {
                        AppCompatDelegate appCompatDelegate = (AppCompatDelegate) ((WeakReference) aVar.next()).get();
                        if (appCompatDelegate != null) {
                            appCompatDelegate.b();
                        }
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
    }

    public static boolean m(Context context) {
        if (f764w == null) {
            try {
                int i5 = d0.f10301d;
                Bundle bundle = context.getPackageManager().getServiceInfo(new ComponentName(context, (Class<?>) d0.class), c0.a() | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT).metaData;
                if (bundle != null) {
                    f764w = Boolean.valueOf(bundle.getBoolean("autoStoreLocales"));
                }
            } catch (PackageManager.NameNotFoundException unused) {
                Log.d("AppCompatDelegate", "Checking for metadata for AppLocalesMetadataHolderService : Service not found");
                f764w = Boolean.FALSE;
            }
        }
        return f764w.booleanValue();
    }

    public static void u(AppCompatDelegate appCompatDelegate) {
        synchronized (E) {
            try {
                f fVar = f766y;
                fVar.getClass();
                s.a aVar = new s.a(fVar);
                while (aVar.hasNext()) {
                    AppCompatDelegate appCompatDelegate2 = (AppCompatDelegate) ((WeakReference) aVar.next()).get();
                    if (appCompatDelegate2 == appCompatDelegate || appCompatDelegate2 == null) {
                        aVar.remove();
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public abstract void B(Toolbar toolbar);

    public void C(int i5) {
    }

    public abstract void D(CharSequence charSequence);

    public abstract ActionMode E(ActionMode.Callback callback);

    public abstract void a(View view, ViewGroup.LayoutParams layoutParams);

    public abstract boolean b();

    public Context c(Context context) {
        return context;
    }

    public abstract View d(int i5);

    public Context e() {
        return null;
    }

    public abstract j f();

    public int g() {
        return -100;
    }

    public abstract MenuInflater h();

    public abstract ActionBar j();

    public abstract void k();

    public abstract void l();

    public abstract void n(Configuration configuration);

    public abstract void o();

    public abstract void p();

    public abstract void q();

    public abstract void r();

    public abstract void s();

    public abstract void t();

    public abstract boolean w(int i5);

    public abstract void x(int i5);

    public abstract void y(View view);

    public abstract void z(View view, ViewGroup.LayoutParams layoutParams);
}
