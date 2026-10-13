package d4;

import android.app.Notification;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import androidx.work.impl.foreground.SystemForegroundService;
import q.g;

/* loaded from: classes.dex */
public final class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7410d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7411e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f7412i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Parcelable f7413v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f7414w;

    public c(SystemForegroundService systemForegroundService, int i5, Notification notification, int i6) {
        this.f7414w = systemForegroundService;
        this.f7411e = i5;
        this.f7413v = notification;
        this.f7412i = i6;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f7410d) {
            case 0:
                Notification notification = (Notification) this.f7413v;
                SystemForegroundService systemForegroundService = (SystemForegroundService) this.f7414w;
                int i5 = Build.VERSION.SDK_INT;
                int i6 = this.f7412i;
                int i10 = this.f7411e;
                if (i5 < 31) {
                    if (i5 < 29) {
                        systemForegroundService.startForeground(i10, notification);
                        break;
                    } else {
                        d.a(systemForegroundService, i10, notification, i6);
                        break;
                    }
                } else {
                    e.a(systemForegroundService, i10, notification, i6);
                    break;
                }
            default:
                ((g) this.f7414w).f16637g.onActivityResized(this.f7411e, this.f7412i, (Bundle) this.f7413v);
                break;
        }
    }

    public c(g gVar, int i5, int i6, Bundle bundle) {
        this.f7414w = gVar;
        this.f7411e = i5;
        this.f7412i = i6;
        this.f7413v = bundle;
    }
}
