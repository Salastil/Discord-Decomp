package hc;

import android.content.Context;
import android.os.Handler;
import com.google.android.gms.tasks.Task;
import io.sentry.SentryLevel;
import io.sentry.g2;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Properties;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b implements zq.c {
    public Object a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f9624b;

    /* renamed from: c, reason: collision with root package name */
    public Object f9625c;

    public b(String str, g2 g2Var, boolean z5) {
        this.a = str;
        this.f9625c = g2Var;
        this.f9624b = z5;
    }

    @Override // zq.c
    public boolean a(yq.p0 c12, yq.p0 c22) {
        boolean z5 = this.f9624b;
        ip.b bVar = (ip.b) this.a;
        ip.b bVar2 = (ip.b) this.f9625c;
        Intrinsics.checkNotNullParameter(c12, "c1");
        Intrinsics.checkNotNullParameter(c22, "c2");
        if (Intrinsics.areEqual(c12, c22)) {
            return true;
        }
        ip.i a = c12.a();
        ip.i a10 = c22.a();
        if (!(a instanceof ip.s0) || !(a10 instanceof ip.s0)) {
            return false;
        }
        kq.b bVar3 = new kq.b(bVar, bVar2);
        return kq.c.a.d((ip.s0) a, (ip.s0) a10, z5, bVar3);
    }

    public e[] b(Handler handler, w wVar, w wVar2, w wVar3, w wVar4) {
        ArrayList arrayList = new ArrayList();
        Context context = (Context) this.a;
        boolean z5 = this.f9624b;
        p9.d dVar = (p9.d) this.f9625c;
        arrayList.add(new le.i(context, dVar, z5, handler, wVar));
        com.google.firebase.messaging.r rVar = new com.google.firebase.messaging.r((Context) this.a);
        if (((e4.m) rVar.f6261v) == null) {
            rVar.f6261v = new e4.m(new jc.n[0]);
        }
        arrayList.add(new jc.n0((Context) this.a, dVar, this.f9624b, handler, wVar2, new jc.k0(rVar)));
        arrayList.add(new wd.j(wVar3, handler.getLooper()));
        arrayList.add(new dd.e(wVar4, handler.getLooper()));
        arrayList.add(new me.b());
        return (e[]) arrayList.toArray(new e[0]);
    }

    public Properties c() {
        g2 g2Var = (g2) this.f9625c;
        String str = (String) this.a;
        try {
            File file = new File(str.trim());
            if (file.isFile() && file.canRead()) {
                BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file));
                try {
                    Properties properties = new Properties();
                    properties.load(bufferedInputStream);
                    bufferedInputStream.close();
                    return properties;
                } finally {
                }
            }
            if (file.isFile()) {
                if (!file.canRead()) {
                    g2Var.u(SentryLevel.ERROR, "Failed to load Sentry configuration since it is not readable: %s", str);
                }
            } else if (this.f9624b) {
                g2Var.u(SentryLevel.ERROR, "Failed to load Sentry configuration since it is not a file or does not exist: %s", str);
                return null;
            }
            return null;
        } catch (Throwable th2) {
            g2Var.i(SentryLevel.ERROR, th2, "Failed to load Sentry configuration from file: %s", str);
            return null;
        }
    }

    public void d() {
        a aVar = (a) this.f9625c;
        Context context = (Context) this.a;
        if (this.f9624b) {
            context.unregisterReceiver(aVar);
            this.f9624b = false;
        }
    }

    public void e(jg.k kVar) {
        synchronized (this.a) {
            try {
                if (((ArrayDeque) this.f9625c) == null) {
                    this.f9625c = new ArrayDeque();
                }
                ((ArrayDeque) this.f9625c).add(kVar);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public void f(Task task) {
        jg.k kVar;
        synchronized (this.a) {
            if (((ArrayDeque) this.f9625c) != null && !this.f9624b) {
                this.f9624b = true;
                while (true) {
                    synchronized (this.a) {
                        try {
                            kVar = (jg.k) ((ArrayDeque) this.f9625c).poll();
                            if (kVar == null) {
                                this.f9624b = false;
                                return;
                            }
                        } finally {
                        }
                    }
                    kVar.a(task);
                }
            }
        }
    }

    public b(Context context) {
        this.a = context;
        p9.d dVar = new p9.d(1);
        dVar.f16329e = 0;
        this.f9625c = dVar;
    }
}
