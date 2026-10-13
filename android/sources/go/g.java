package go;

import androidx.core.view.g0;
import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableIterator;

/* loaded from: classes3.dex */
public final class g extends g0 implements Iterator, KMutableIterator {

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ int f9404w;

    public g(i map, int i5) {
        this.f9404w = i5;
        Intrinsics.checkNotNullParameter(map, "map");
        this.f1594v = map;
        this.f1592e = -1;
        this.f1593i = map.E;
        e();
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f9404w) {
            case 0:
                b();
                int i5 = this.f1591d;
                i iVar = (i) this.f1594v;
                if (i5 >= iVar.f9413x) {
                    throw new NoSuchElementException();
                }
                this.f1591d = i5 + 1;
                this.f1592e = i5;
                h hVar = new h(iVar, i5);
                e();
                return hVar;
            case 1:
                b();
                int i6 = this.f1591d;
                i iVar2 = (i) this.f1594v;
                if (i6 >= iVar2.f9413x) {
                    throw new NoSuchElementException();
                }
                this.f1591d = i6 + 1;
                this.f1592e = i6;
                Object obj = iVar2.f9408d[i6];
                e();
                return obj;
            default:
                b();
                int i10 = this.f1591d;
                i iVar3 = (i) this.f1594v;
                if (i10 >= iVar3.f9413x) {
                    throw new NoSuchElementException();
                }
                this.f1591d = i10 + 1;
                this.f1592e = i10;
                Object[] objArr = iVar3.f9409e;
                Intrinsics.checkNotNull(objArr);
                Object obj2 = objArr[this.f1592e];
                e();
                return obj2;
        }
    }
}
