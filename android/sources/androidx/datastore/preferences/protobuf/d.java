package androidx.datastore.preferences.protobuf;

import java.util.Iterator;
import java.util.NoSuchElementException;

/* loaded from: classes.dex */
public final class d implements Iterator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1729d = 0;

    /* renamed from: e, reason: collision with root package name */
    public int f1730e = 0;

    /* renamed from: i, reason: collision with root package name */
    public final int f1731i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Iterable f1732v;

    public d(bg.w0 w0Var) {
        this.f1732v = w0Var;
        this.f1731i = w0Var.e();
    }

    public byte a() {
        try {
            byte[] bArr = ((iq.t) this.f1732v).f12239e;
            int i5 = this.f1730e;
            this.f1730e = i5 + 1;
            return bArr[i5];
        } catch (ArrayIndexOutOfBoundsException e9) {
            throw new NoSuchElementException(e9.getMessage());
        }
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        switch (this.f1729d) {
            case 0:
                if (this.f1730e < this.f1731i) {
                }
                break;
            case 1:
                if (this.f1730e < this.f1731i) {
                }
                break;
            case 2:
                if (this.f1730e < this.f1731i) {
                }
                break;
            case 3:
                if (this.f1730e < this.f1731i) {
                }
                break;
            default:
                if (this.f1730e < this.f1731i) {
                }
                break;
        }
        return false;
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f1729d) {
            case 0:
                int i5 = this.f1730e;
                if (i5 >= this.f1731i) {
                    throw new NoSuchElementException();
                }
                this.f1730e = i5 + 1;
                return Byte.valueOf(((f) this.f1732v).f1744e[i5]);
            case 1:
                int i6 = this.f1730e;
                if (i6 >= this.f1731i) {
                    throw new NoSuchElementException();
                }
                this.f1730e = i6 + 1;
                return Byte.valueOf(((bg.w0) this.f1732v).b(i6));
            case 2:
                int i10 = this.f1730e;
                if (i10 >= this.f1731i) {
                    throw new NoSuchElementException();
                }
                this.f1730e = i10 + 1;
                return Byte.valueOf(((com.google.android.gms.internal.play_billing.u1) this.f1732v).a(i10));
            case 3:
                int i11 = this.f1730e;
                if (i11 >= this.f1731i) {
                    throw new NoSuchElementException();
                }
                this.f1730e = i11 + 1;
                return Byte.valueOf(((ij.g) this.f1732v).h(i11));
            default:
                return Byte.valueOf(a());
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        switch (this.f1729d) {
            case 0:
                throw new UnsupportedOperationException();
            case 1:
                throw new UnsupportedOperationException();
            case 2:
                throw new UnsupportedOperationException();
            case 3:
                throw new UnsupportedOperationException();
            default:
                throw new UnsupportedOperationException();
        }
    }

    public d(com.google.android.gms.internal.play_billing.u1 u1Var) {
        this.f1732v = u1Var;
        this.f1731i = u1Var.d();
    }

    public d(ij.g gVar) {
        this.f1732v = gVar;
        this.f1731i = gVar.size();
    }

    public d(f fVar) {
        this.f1732v = fVar;
        this.f1731i = fVar.size();
    }

    public d(iq.t tVar) {
        this.f1732v = tVar;
        this.f1731i = tVar.f12239e.length;
    }
}
