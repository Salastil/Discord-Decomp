package nc;

import android.net.Uri;
import com.google.android.exoplayer2.MediaItem;
import fi.e1;
import hc.n0;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;

/* loaded from: classes3.dex */
public final class g {
    public final Object a = new Object();

    /* renamed from: b, reason: collision with root package name */
    public n0 f15030b;

    /* renamed from: c, reason: collision with root package name */
    public f f15031c;

    public static f a(n0 n0Var) {
        a5.g gVar = new a5.g(1);
        Uri uri = n0Var.f9812e;
        d0 d0Var = new d0(uri == null ? null : uri.toString(), n0Var.f9816x, gVar);
        e1 it = n0Var.f9813i.entrySet().iterator();
        while (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            String str = (String) entry.getKey();
            String str2 = (String) entry.getValue();
            str.getClass();
            str2.getClass();
            synchronized (d0Var.f15004d) {
                d0Var.f15004d.put(str, str2);
            }
        }
        HashMap hashMap = new HashMap();
        UUID uuid = hc.h.a;
        p9.d dVar = new p9.d(-1, 4);
        UUID uuid2 = n0Var.f9811d;
        uuid2.getClass();
        boolean z5 = n0Var.f9814v;
        boolean z6 = n0Var.f9815w;
        int[] S = ki.b.S(n0Var.f9817y);
        int length = S.length;
        for (int i5 = 0; i5 < length; i5++) {
            int i6 = S[i5];
            ke.b.g(i6 == 2 || i6 == 1);
        }
        f fVar = new f(uuid2, d0Var, hashMap, z5, (int[]) S.clone(), z6, dVar);
        byte[] bArr = n0Var.E;
        byte[] copyOf = bArr != null ? Arrays.copyOf(bArr, bArr.length) : null;
        ke.b.k(fVar.f15018m.isEmpty());
        fVar.f15027v = copyOf;
        return fVar;
    }

    public final r b(MediaItem mediaItem) {
        f fVar;
        mediaItem.f5235e.getClass();
        n0 n0Var = mediaItem.f5235e.f9835i;
        if (n0Var == null || ke.d0.a < 18) {
            return r.a;
        }
        synchronized (this.a) {
            try {
                if (!n0Var.equals(this.f15030b)) {
                    this.f15030b = n0Var;
                    this.f15031c = a(n0Var);
                }
                fVar = this.f15031c;
                fVar.getClass();
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return fVar;
    }
}
