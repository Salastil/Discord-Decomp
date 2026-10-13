package nc;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemClock;
import android.util.Pair;
import bg.y0;
import hc.g1;
import ie.j0;
import java.io.FileNotFoundException;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class a extends Handler {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ c f14972b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(c cVar, Looper looper) {
        super(looper);
        this.f14972b = cVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:55:0x00c2  */
    @Override // android.os.Handler
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void handleMessage(Message message) {
        Exception exc;
        long j;
        b bVar = (b) message.obj;
        try {
            int i5 = message.what;
            if (i5 == 0) {
                exc = ((d0) this.f14972b.k).c((x) bVar.f14975c);
            } else {
                if (i5 != 1) {
                    throw new RuntimeException();
                }
                c cVar = this.f14972b;
                exc = ((d0) cVar.k).a(cVar.f14985l, (w) bVar.f14975c);
            }
        } catch (g0 e9) {
            b bVar2 = (b) message.obj;
            if (bVar2.f14974b) {
                int i6 = bVar2.f14976d + 1;
                bVar2.f14976d = i6;
                if (i6 <= this.f14972b.f14984i.k(3)) {
                    SystemClock.elapsedRealtime();
                    SystemClock.elapsedRealtime();
                    Throwable y0Var = e9.getCause() instanceof IOException ? (IOException) e9.getCause() : new y0(e9.getCause());
                    p9.d dVar = this.f14972b.f14984i;
                    int i10 = bVar2.f14976d;
                    dVar.getClass();
                    if (!(y0Var instanceof g1) && !(y0Var instanceof FileNotFoundException) && !(y0Var instanceof ie.a0) && !(y0Var instanceof j0)) {
                        int i11 = ie.m.f10690e;
                        while (y0Var != null) {
                            if (!(y0Var instanceof ie.m) || ((ie.m) y0Var).f10691d != 2008) {
                                y0Var = y0Var.getCause();
                            }
                        }
                        j = Math.min((i10 - 1) * 1000, 5000);
                        if (j != -9223372036854775807L) {
                            synchronized (this) {
                                try {
                                    if (!this.a) {
                                        sendMessageDelayed(Message.obtain(message), j);
                                        return;
                                    }
                                } finally {
                                }
                            }
                        }
                    }
                    j = -9223372036854775807L;
                    if (j != -9223372036854775807L) {
                    }
                }
            }
            exc = e9;
        } catch (Exception e10) {
            ke.b.O("DefaultDrmSession", "Key/provisioning request produced an unexpected exception. Not retrying.", e10);
            exc = e10;
        }
        p9.d dVar2 = this.f14972b.f14984i;
        long j5 = bVar.a;
        dVar2.getClass();
        synchronized (this) {
            try {
                if (!this.a) {
                    this.f14972b.f14987n.obtainMessage(message.what, Pair.create(bVar.f14975c, exc)).sendToTarget();
                }
            } finally {
            }
        }
    }
}
