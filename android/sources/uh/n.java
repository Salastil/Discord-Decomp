package uh;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import java.util.HashSet;

/* loaded from: classes3.dex */
public abstract class n {
    public final a5.m a;

    /* renamed from: b, reason: collision with root package name */
    public final IntentFilter f18912b;

    /* renamed from: c, reason: collision with root package name */
    public final Context f18913c;

    /* renamed from: d, reason: collision with root package name */
    public final HashSet f18914d = new HashSet();

    /* renamed from: e, reason: collision with root package name */
    public c4.d f18915e = null;

    /* renamed from: f, reason: collision with root package name */
    public volatile boolean f18916f = false;

    public n(a5.m mVar, IntentFilter intentFilter, Context context) {
        this.a = mVar;
        this.f18912b = intentFilter;
        Context applicationContext = context.getApplicationContext();
        this.f18913c = applicationContext != null ? applicationContext : context;
    }

    public final void a() {
        c4.d dVar;
        if ((this.f18916f || !this.f18914d.isEmpty()) && this.f18915e == null) {
            c4.d dVar2 = new c4.d(6, this);
            this.f18915e = dVar2;
            if (Build.VERSION.SDK_INT >= 33) {
                this.f18913c.registerReceiver(dVar2, this.f18912b, 2);
            } else {
                this.f18913c.registerReceiver(dVar2, this.f18912b);
            }
        }
        if (this.f18916f || !this.f18914d.isEmpty() || (dVar = this.f18915e) == null) {
            return;
        }
        this.f18913c.unregisterReceiver(dVar);
        this.f18915e = null;
    }

    public abstract void b(Intent intent);
}
