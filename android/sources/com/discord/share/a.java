package com.discord.share;

import android.app.Activity;
import android.app.Application;
import android.os.Build;
import android.os.Handler;
import com.discord.tti_manager.TTIManagerModule;
import com.google.android.gms.internal.play_billing.v0;
import ii.o;
import java.lang.reflect.Method;
import x0.d;
import x0.e;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4372d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Activity f4373e;

    public /* synthetic */ a(Activity activity, int i5) {
        this.f4372d = i5;
        this.f4373e = activity;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v1 */
    /* JADX WARN: Type inference failed for: r4v2 */
    /* JADX WARN: Type inference failed for: r4v3 */
    /* JADX WARN: Type inference failed for: r4v6 */
    /* JADX WARN: Type inference failed for: r4v7, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r4v8 */
    /* JADX WARN: Type inference failed for: r4v9 */
    /* JADX WARN: Type inference failed for: r5v1 */
    /* JADX WARN: Type inference failed for: r5v2 */
    /* JADX WARN: Type inference failed for: r5v5 */
    /* JADX WARN: Type inference failed for: r5v6, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r5v7 */
    @Override // java.lang.Runnable
    public final void run() {
        Object obj;
        d dVar;
        Application application;
        switch (this.f4372d) {
            case 0:
                this.f4373e.finishAffinity();
                return;
            case 1:
                TTIManagerModule.reportFullyDrawn$lambda$4(this.f4373e);
                return;
            default:
                Activity activity = this.f4373e;
                if (activity.isFinishing()) {
                    return;
                }
                Handler handler = e.f20195g;
                Method method = e.f20194f;
                int i5 = Build.VERSION.SDK_INT;
                if (i5 >= 28) {
                    activity.recreate();
                    return;
                }
                ?? r5 = 27;
                if (((i5 != 26 && i5 != 27) || method != null) && (e.f20193e != null || e.f20192d != null)) {
                    try {
                        Object obj2 = e.f20191c.get(activity);
                        if (obj2 != null && (obj = e.f20190b.get(activity)) != null) {
                            Application application2 = activity.getApplication();
                            d dVar2 = new d(activity);
                            application2.registerActivityLifecycleCallbacks(dVar2);
                            handler.post(new o(24, dVar2, obj2));
                            ?? r42 = (i5 == 26 || i5 == 27) ? 1 : 0;
                            try {
                                if (r42 != 0) {
                                    try {
                                        Boolean bool = Boolean.FALSE;
                                        r42 = application2;
                                        r5 = dVar2;
                                        method.invoke(obj, obj2, null, null, 0, bool, null, null, bool, bool);
                                    } catch (Throwable th2) {
                                        th = th2;
                                        application = application2;
                                        dVar = dVar2;
                                        handler.post(new v0(25, application, dVar));
                                        throw th;
                                    }
                                } else {
                                    r42 = application2;
                                    r5 = dVar2;
                                    activity.recreate();
                                }
                                handler.post(new v0(25, (Object) r42, (Object) r5));
                                return;
                            } catch (Throwable th3) {
                                th = th3;
                                application = r42;
                                dVar = r5;
                            }
                        }
                    } catch (Throwable unused) {
                    }
                }
                activity.recreate();
                return;
        }
    }
}
