package i;

import android.content.ComponentName;
import android.content.Context;
import android.os.Build;
import androidx.appcompat.app.AppCompatDelegate;
import androidx.core.os.LocaleListCompat;
import java.lang.ref.WeakReference;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes.dex */
public final /* synthetic */ class j implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10322d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Context f10323e;

    public /* synthetic */ j(Context context, int i5) {
        this.f10322d = i5;
        this.f10323e = context;
    }

    /* JADX WARN: Code restructure failed: missing block: B:39:0x0088, code lost:
    
        if (r3 != null) goto L29;
     */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0097  */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        LocaleListCompat localeListCompat;
        Object obj;
        Context e9;
        int i5 = this.f10322d;
        Context context = this.f10323e;
        switch (i5) {
            case 0:
                int i6 = Build.VERSION.SDK_INT;
                if (i6 >= 33) {
                    f4.l lVar = AppCompatDelegate.f760d;
                    ComponentName componentName = new ComponentName(context, "androidx.appcompat.app.AppLocalesMetadataHolderService");
                    if (context.getPackageManager().getComponentEnabledSetting(componentName) != 1) {
                        if (i6 < 33) {
                            localeListCompat = AppCompatDelegate.f762i;
                            break;
                        } else {
                            s.f fVar = AppCompatDelegate.f766y;
                            fVar.getClass();
                            s.a aVar = new s.a(fVar);
                            while (true) {
                                if (aVar.hasNext()) {
                                    AppCompatDelegate appCompatDelegate = (AppCompatDelegate) ((WeakReference) aVar.next()).get();
                                    if (appCompatDelegate != null && (e9 = appCompatDelegate.e()) != null) {
                                        obj = e9.getSystemService("locale");
                                    }
                                } else {
                                    obj = null;
                                }
                            }
                            if (obj != null) {
                                localeListCompat = new LocaleListCompat(new f1.d(l.a(obj)));
                                if (localeListCompat.a.a.isEmpty()) {
                                    String f2 = x0.f.f(context);
                                    Object systemService = context.getSystemService("locale");
                                    if (systemService != null) {
                                        l.b(systemService, k.a(f2));
                                    }
                                }
                                context.getPackageManager().setComponentEnabledSetting(componentName, 1, 1);
                            }
                            localeListCompat = LocaleListCompat.f1523b;
                            if (localeListCompat.a.a.isEmpty()) {
                            }
                            context.getPackageManager().setComponentEnabledSetting(componentName, 1, 1);
                        }
                    }
                }
                AppCompatDelegate.f765x = true;
                break;
            case 1:
                new ThreadPoolExecutor(0, 1, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue()).execute(new j(context, 2));
                break;
            default:
                y2.c.t(context, new com.discord.misc.utilities.threading.a(1), y2.c.a, false);
                break;
        }
    }
}
