package jc;

import java.nio.ByteBuffer;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class k {
    public final fi.e0 a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f12539b = new ArrayList();

    /* renamed from: c, reason: collision with root package name */
    public ByteBuffer[] f12540c = new ByteBuffer[0];

    /* renamed from: d, reason: collision with root package name */
    public boolean f12541d;

    public k(fi.e0 e0Var) {
        this.a = e0Var;
        l lVar = l.f12572e;
        this.f12541d = false;
    }

    public final void a() {
        ArrayList arrayList = this.f12539b;
        arrayList.clear();
        this.f12541d = false;
        int i5 = 0;
        while (true) {
            fi.e0 e0Var = this.a;
            if (i5 >= e0Var.size()) {
                break;
            }
            n nVar = (n) e0Var.get(i5);
            nVar.flush();
            if (nVar.c()) {
                arrayList.add(nVar);
            }
            i5++;
        }
        this.f12540c = new ByteBuffer[arrayList.size()];
        for (int i6 = 0; i6 <= b(); i6++) {
            this.f12540c[i6] = ((n) arrayList.get(i6)).d();
        }
    }

    public final int b() {
        return this.f12540c.length - 1;
    }

    public final boolean c() {
        return this.f12541d && ((n) this.f12539b.get(b())).g() && !this.f12540c[b()].hasRemaining();
    }

    public final boolean d() {
        return !this.f12539b.isEmpty();
    }

    public final void e(ByteBuffer byteBuffer) {
        boolean z5;
        for (boolean z6 = true; z6; z6 = z5) {
            z5 = false;
            int i5 = 0;
            while (i5 <= b()) {
                if (!this.f12540c[i5].hasRemaining()) {
                    ArrayList arrayList = this.f12539b;
                    n nVar = (n) arrayList.get(i5);
                    if (!nVar.g()) {
                        ByteBuffer byteBuffer2 = i5 > 0 ? this.f12540c[i5 - 1] : byteBuffer.hasRemaining() ? byteBuffer : n.a;
                        long remaining = byteBuffer2.remaining();
                        nVar.e(byteBuffer2);
                        this.f12540c[i5] = nVar.d();
                        z5 |= remaining - ((long) byteBuffer2.remaining()) > 0 || this.f12540c[i5].hasRemaining();
                    } else if (!this.f12540c[i5].hasRemaining() && i5 < b()) {
                        ((n) arrayList.get(i5 + 1)).f();
                    }
                }
                i5++;
            }
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof k)) {
            return false;
        }
        fi.e0 e0Var = ((k) obj).a;
        fi.e0 e0Var2 = this.a;
        if (e0Var2.size() != e0Var.size()) {
            return false;
        }
        for (int i5 = 0; i5 < e0Var2.size(); i5++) {
            if (e0Var2.get(i5) != e0Var.get(i5)) {
                return false;
            }
        }
        return true;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }
}
