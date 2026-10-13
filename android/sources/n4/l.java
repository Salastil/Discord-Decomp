package n4;

import android.graphics.Matrix;
import android.graphics.Path;
import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

/* loaded from: classes.dex */
public final class l implements m, j {
    public final Path a = new Path();

    /* renamed from: b, reason: collision with root package name */
    public final Path f14905b = new Path();

    /* renamed from: c, reason: collision with root package name */
    public final Path f14906c = new Path();

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f14907d = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public final s4.g f14908e;

    public l(s4.g gVar) {
        this.f14908e = gVar;
    }

    public final void a(Path.Op op2) {
        Path path = this.f14905b;
        path.reset();
        Path path2 = this.a;
        path2.reset();
        ArrayList arrayList = this.f14907d;
        for (int size = arrayList.size() - 1; size >= 1; size--) {
            m mVar = (m) arrayList.get(size);
            if (mVar instanceof d) {
                d dVar = (d) mVar;
                ArrayList arrayList2 = (ArrayList) dVar.f();
                for (int size2 = arrayList2.size() - 1; size2 >= 0; size2--) {
                    Path h6 = ((m) arrayList2.get(size2)).h();
                    Matrix matrix = dVar.f14854c;
                    o4.q qVar = dVar.k;
                    if (qVar != null) {
                        matrix = qVar.e();
                    } else {
                        matrix.reset();
                    }
                    h6.transform(matrix);
                    path.addPath(h6);
                }
            } else {
                path.addPath(mVar.h());
            }
        }
        int i5 = 0;
        m mVar2 = (m) arrayList.get(0);
        if (mVar2 instanceof d) {
            d dVar2 = (d) mVar2;
            List f2 = dVar2.f();
            while (true) {
                ArrayList arrayList3 = (ArrayList) f2;
                if (i5 >= arrayList3.size()) {
                    break;
                }
                Path h7 = ((m) arrayList3.get(i5)).h();
                Matrix matrix2 = dVar2.f14854c;
                o4.q qVar2 = dVar2.k;
                if (qVar2 != null) {
                    matrix2 = qVar2.e();
                } else {
                    matrix2.reset();
                }
                h7.transform(matrix2);
                path2.addPath(h7);
                i5++;
            }
        } else {
            path2.set(mVar2.h());
        }
        this.f14906c.op(path2, path, op2);
    }

    @Override // n4.c
    public final void b(List list, List list2) {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f14907d;
            if (i5 >= arrayList.size()) {
                return;
            }
            ((m) arrayList.get(i5)).b(list, list2);
            i5++;
        }
    }

    @Override // n4.j
    public final void f(ListIterator listIterator) {
        while (listIterator.hasPrevious() && listIterator.previous() != this) {
        }
        while (listIterator.hasPrevious()) {
            c cVar = (c) listIterator.previous();
            if (cVar instanceof m) {
                this.f14907d.add((m) cVar);
                listIterator.remove();
            }
        }
    }

    @Override // n4.m
    public final Path h() {
        Path path = this.f14906c;
        path.reset();
        s4.g gVar = this.f14908e;
        if (!gVar.f17774b) {
            int b10 = f0.e.b(gVar.a);
            if (b10 == 0) {
                int i5 = 0;
                while (true) {
                    ArrayList arrayList = this.f14907d;
                    if (i5 >= arrayList.size()) {
                        break;
                    }
                    path.addPath(((m) arrayList.get(i5)).h());
                    i5++;
                }
            } else {
                if (b10 == 1) {
                    a(Path.Op.UNION);
                    return path;
                }
                if (b10 == 2) {
                    a(Path.Op.REVERSE_DIFFERENCE);
                    return path;
                }
                if (b10 == 3) {
                    a(Path.Op.INTERSECT);
                    return path;
                }
                if (b10 == 4) {
                    a(Path.Op.XOR);
                    return path;
                }
            }
        }
        return path;
    }
}
