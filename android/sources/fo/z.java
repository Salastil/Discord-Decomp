package fo;

import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public class z implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8845d = 5;

    /* renamed from: e, reason: collision with root package name */
    public int f8846e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f8847i;

    public z(byte[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        this.f8847i = array;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        switch (this.f8845d) {
            case 0:
                if (this.f8846e < ((byte[]) this.f8847i).length) {
                }
                break;
            case 1:
                if (this.f8846e < ((int[]) this.f8847i).length) {
                }
                break;
            case 2:
                if (this.f8846e < ((long[]) this.f8847i).length) {
                }
                break;
            case 3:
                if (this.f8846e < ((short[]) this.f8847i).length) {
                }
                break;
            case 4:
                if (this.f8846e < ((kotlin.collections.f) this.f8847i).a()) {
                }
                break;
            default:
                if (this.f8846e > 0) {
                }
                break;
        }
        return false;
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f8845d) {
            case 0:
                int i5 = this.f8846e;
                byte[] bArr = (byte[]) this.f8847i;
                if (i5 >= bArr.length) {
                    throw new NoSuchElementException(String.valueOf(this.f8846e));
                }
                this.f8846e = i5 + 1;
                return new y(bArr[i5]);
            case 1:
                int i6 = this.f8846e;
                int[] iArr = (int[]) this.f8847i;
                if (i6 >= iArr.length) {
                    throw new NoSuchElementException(String.valueOf(this.f8846e));
                }
                this.f8846e = i6 + 1;
                return new c0(iArr[i6]);
            case 2:
                int i10 = this.f8846e;
                long[] jArr = (long[]) this.f8847i;
                if (i10 >= jArr.length) {
                    throw new NoSuchElementException(String.valueOf(this.f8846e));
                }
                this.f8846e = i10 + 1;
                return new f0(jArr[i10]);
            case 3:
                int i11 = this.f8846e;
                short[] sArr = (short[]) this.f8847i;
                if (i11 >= sArr.length) {
                    throw new NoSuchElementException(String.valueOf(this.f8846e));
                }
                this.f8846e = i11 + 1;
                return new j0(sArr[i11]);
            case 4:
                if (!hasNext()) {
                    throw new NoSuchElementException();
                }
                kotlin.collections.f fVar = (kotlin.collections.f) this.f8847i;
                int i12 = this.f8846e;
                this.f8846e = i12 + 1;
                return fVar.get(i12);
            default:
                bs.b0 b0Var = (bs.b0) this.f8847i;
                int i13 = b0Var.f3203c;
                int i14 = this.f8846e;
                this.f8846e = i14 - 1;
                return b0Var.f3205e[i13 - i14];
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        switch (this.f8845d) {
            case 0:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            case 1:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            case 2:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            case 3:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            case 4:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            default:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
        }
    }

    public z(int[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        this.f8847i = array;
    }

    public z(long[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        this.f8847i = array;
    }

    public z(short[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        this.f8847i = array;
    }

    public z(kotlin.collections.f fVar) {
        this.f8847i = fVar;
    }

    public z(bs.b0 b0Var) {
        this.f8847i = b0Var;
        this.f8846e = b0Var.f3203c;
    }
}
