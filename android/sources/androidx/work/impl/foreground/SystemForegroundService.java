package androidx.work.impl.foreground;

import android.app.NotificationManager;
import android.content.Intent;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import androidx.lifecycle.w;
import com.google.android.gms.internal.play_billing.v0;
import d4.b;
import java.util.UUID;
import v3.p;
import w3.o;

/* loaded from: classes.dex */
public class SystemForegroundService extends w {

    /* renamed from: x, reason: collision with root package name */
    public static final String f2591x = p.f("SystemFgService");

    /* renamed from: e, reason: collision with root package name */
    public Handler f2592e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f2593i;

    /* renamed from: v, reason: collision with root package name */
    public b f2594v;

    /* renamed from: w, reason: collision with root package name */
    public NotificationManager f2595w;

    public final void a() {
        this.f2592e = new Handler(Looper.getMainLooper());
        this.f2595w = (NotificationManager) getApplicationContext().getSystemService("notification");
        b bVar = new b(getApplicationContext());
        this.f2594v = bVar;
        if (bVar.F != null) {
            p.d().b(b.G, "A callback already exists.");
        } else {
            bVar.F = this;
        }
    }

    @Override // androidx.lifecycle.w, android.app.Service
    public final void onCreate() {
        super.onCreate();
        a();
    }

    @Override // androidx.lifecycle.w, android.app.Service
    public final void onDestroy() {
        super.onDestroy();
        this.f2594v.f();
    }

    @Override // android.app.Service
    public final int onStartCommand(Intent intent, int i5, int i6) {
        super.onStartCommand(intent, i5, i6);
        boolean z5 = this.f2593i;
        String str = f2591x;
        if (z5) {
            p.d().e(str, "Re-initializing SystemForegroundService after a request to shut-down.");
            this.f2594v.f();
            a();
            this.f2593i = false;
        }
        if (intent == null) {
            return 3;
        }
        b bVar = this.f2594v;
        bVar.getClass();
        String str2 = b.G;
        String action = intent.getAction();
        if ("ACTION_START_FOREGROUND".equals(action)) {
            p.d().e(str2, "Started foreground service " + intent);
            bVar.f7404e.a(new v0(bVar, intent.getStringExtra("KEY_WORKSPEC_ID"), 7, false));
            bVar.d(intent);
            return 3;
        }
        if ("ACTION_NOTIFY".equals(action)) {
            bVar.d(intent);
            return 3;
        }
        if (!"ACTION_CANCEL_WORK".equals(action)) {
            if (!"ACTION_STOP_FOREGROUND".equals(action)) {
                return 3;
            }
            p.d().e(str2, "Stopping foreground service");
            SystemForegroundService systemForegroundService = bVar.F;
            if (systemForegroundService == null) {
                return 3;
            }
            systemForegroundService.f2593i = true;
            p.d().a(str, "All commands completed.");
            if (Build.VERSION.SDK_INT >= 26) {
                systemForegroundService.stopForeground(true);
            }
            systemForegroundService.stopSelf();
            return 3;
        }
        p.d().e(str2, "Stopping foreground work for " + intent);
        String stringExtra = intent.getStringExtra("KEY_WORKSPEC_ID");
        if (stringExtra == null || TextUtils.isEmpty(stringExtra)) {
            return 3;
        }
        o oVar = bVar.f7403d;
        UUID fromString = UUID.fromString(stringExtra);
        oVar.getClass();
        oVar.f19663d.a(new f4.b(oVar, fromString, 0));
        return 3;
    }
}
