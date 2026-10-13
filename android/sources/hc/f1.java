package hc;

import android.graphics.Matrix;
import android.graphics.Path;
import android.graphics.PointF;
import android.graphics.RectF;
import android.os.Handler;
import android.os.Looper;
import com.google.android.exoplayer2.Timeline;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.HashMap;
import java.util.HashSet;
import java.util.IdentityHashMap;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public final class f1 {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f9693b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f9694c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f9695d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f9696e;

    /* renamed from: f, reason: collision with root package name */
    public final Object f9697f;

    /* renamed from: g, reason: collision with root package name */
    public final Object f9698g;

    /* renamed from: h, reason: collision with root package name */
    public final Object f9699h;

    /* renamed from: i, reason: collision with root package name */
    public final Object f9700i;
    public final Object j;
    public Object k;

    /* renamed from: l, reason: collision with root package name */
    public Object f9701l;

    public f1() {
        this.f9693b = new lh.v[4];
        this.f9694c = new Matrix[4];
        this.f9695d = new Matrix[4];
        this.f9696e = new PointF();
        this.f9697f = new Path();
        this.f9698g = new Path();
        this.f9699h = new lh.v();
        this.f9700i = new float[2];
        this.j = new float[2];
        this.k = new Path();
        this.f9701l = new Path();
        this.a = true;
        for (int i5 = 0; i5 < 4; i5++) {
            ((lh.v[]) this.f9693b)[i5] = new lh.v();
            ((Matrix[]) this.f9694c)[i5] = new Matrix();
            ((Matrix[]) this.f9695d)[i5] = new Matrix();
        }
    }

    public Timeline a(int i5, ArrayList arrayList, nd.t0 t0Var) {
        ArrayList arrayList2 = (ArrayList) this.f9694c;
        if (!arrayList.isEmpty()) {
            this.k = t0Var;
            for (int i6 = i5; i6 < arrayList.size() + i5; i6++) {
                e1 e1Var = (e1) arrayList.get(i6 - i5);
                if (i6 > 0) {
                    e1 e1Var2 = (e1) arrayList2.get(i6 - 1);
                    e1Var.f9668d = e1Var2.a.L.f15114e.o() + e1Var2.f9668d;
                    e1Var.f9669e = false;
                    e1Var.f9667c.clear();
                } else {
                    e1Var.f9668d = 0;
                    e1Var.f9669e = false;
                    e1Var.f9667c.clear();
                }
                int o6 = e1Var.a.L.f15114e.o();
                for (int i10 = i6; i10 < arrayList2.size(); i10++) {
                    ((e1) arrayList2.get(i10)).f9668d += o6;
                }
                arrayList2.add(i6, e1Var);
                ((HashMap) this.f9696e).put(e1Var.f9666b, e1Var);
                if (this.a) {
                    g(e1Var);
                    if (((IdentityHashMap) this.f9695d).isEmpty()) {
                        ((HashSet) this.f9699h).add(e1Var);
                    } else {
                        d1 d1Var = (d1) ((HashMap) this.f9697f).get(e1Var);
                        if (d1Var != null) {
                            d1Var.a.c(d1Var.f9656b);
                        }
                    }
                }
            }
        }
        return c();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r16v0 */
    /* JADX WARN: Type inference failed for: r16v1 */
    /* JADX WARN: Type inference failed for: r16v5 */
    public void b(lh.m mVar, float[] fArr, float f2, RectF rectF, u4.b bVar, Path path) {
        int i5;
        boolean z5;
        float f10;
        u4.b bVar2;
        boolean z6;
        u4.b bVar3 = bVar;
        Matrix[] matrixArr = (Matrix[]) this.f9695d;
        float[] fArr2 = (float[]) this.f9700i;
        lh.v[] vVarArr = (lh.v[]) this.f9693b;
        Matrix[] matrixArr2 = (Matrix[]) this.f9694c;
        path.rewind();
        Path path2 = (Path) this.f9697f;
        path2.rewind();
        Path path3 = (Path) this.f9698g;
        path3.rewind();
        path3.addRect(rectF, Path.Direction.CW);
        int i6 = 0;
        while (true) {
            z5 = 0;
            if (i6 >= 4) {
                break;
            }
            PointF pointF = (PointF) this.f9696e;
            lh.d cVar = fArr == null ? i6 != 1 ? i6 != 2 ? i6 != 3 ? mVar.f14020f : mVar.f14019e : mVar.f14022h : mVar.f14021g : new lh.c(fArr[i6]);
            io.sentry.config.a aVar = i6 != 1 ? i6 != 2 ? i6 != 3 ? mVar.f14016b : mVar.a : mVar.f14018d : mVar.f14017c;
            lh.v vVar = vVarArr[i6];
            aVar.getClass();
            Matrix[] matrixArr3 = matrixArr;
            aVar.q(vVar, f2, cVar.a(rectF));
            int i10 = i6 + 1;
            float f11 = (i10 % 4) * 90;
            matrixArr2[i6].reset();
            if (i6 == 1) {
                pointF.set(rectF.right, rectF.bottom);
            } else if (i6 == 2) {
                pointF.set(rectF.left, rectF.bottom);
            } else if (i6 != 3) {
                pointF.set(rectF.right, rectF.top);
            } else {
                pointF.set(rectF.left, rectF.top);
            }
            matrixArr2[i6].setTranslate(pointF.x, pointF.y);
            matrixArr2[i6].preRotate(f11);
            lh.v vVar2 = vVarArr[i6];
            fArr2[0] = vVar2.f14041b;
            fArr2[1] = vVar2.f14042c;
            matrixArr2[i6].mapPoints(fArr2);
            matrixArr3[i6].reset();
            matrixArr3[i6].setTranslate(fArr2[0], fArr2[1]);
            matrixArr3[i6].preRotate(f11);
            i6 = i10;
            matrixArr = matrixArr3;
        }
        Matrix[] matrixArr4 = matrixArr;
        int i11 = 0;
        for (i5 = 4; i11 < i5; i5 = 4) {
            lh.v vVar3 = vVarArr[i11];
            vVar3.getClass();
            fArr2[z5] = 0.0f;
            fArr2[1] = vVar3.a;
            matrixArr2[i11].mapPoints(fArr2);
            if (i11 == 0) {
                path.moveTo(fArr2[z5], fArr2[1]);
            } else {
                path.lineTo(fArr2[z5], fArr2[1]);
            }
            vVarArr[i11].b(matrixArr2[i11], path);
            if (bVar3 != null) {
                lh.v vVar4 = vVarArr[i11];
                Matrix matrix = matrixArr2[i11];
                lh.i iVar = (lh.i) bVar3.f18810e;
                BitSet bitSet = iVar.f14004w;
                vVar4.getClass();
                f10 = 0.0f;
                bitSet.set(i11, z5);
                lh.u[] uVarArr = iVar.f14002i;
                vVar4.a(vVar4.f14044e);
                uVarArr[i11] = new lh.o(new ArrayList((ArrayList) vVar4.f14046g), new Matrix(matrix));
            } else {
                f10 = 0.0f;
            }
            Path path4 = (Path) this.k;
            lh.v vVar5 = (lh.v) this.f9699h;
            int i12 = i11 + 1;
            int i13 = i12 % 4;
            lh.v vVar6 = vVarArr[i11];
            fArr2[0] = vVar6.f14041b;
            fArr2[1] = vVar6.f14042c;
            matrixArr2[i11].mapPoints(fArr2);
            float[] fArr3 = (float[]) this.j;
            lh.v vVar7 = vVarArr[i13];
            vVar7.getClass();
            fArr3[0] = f10;
            fArr3[1] = vVar7.a;
            matrixArr2[i13].mapPoints(fArr3);
            lh.v[] vVarArr2 = vVarArr;
            Matrix[] matrixArr5 = matrixArr2;
            float max = Math.max(((float) Math.hypot(fArr2[0] - fArr3[0], fArr2[1] - fArr3[1])) - 0.001f, f10);
            lh.v vVar8 = vVarArr2[i11];
            fArr2[0] = vVar8.f14041b;
            fArr2[1] = vVar8.f14042c;
            matrixArr5[i11].mapPoints(fArr2);
            if (i11 == 1 || i11 == 3) {
                Math.abs(rectF.centerX() - fArr2[0]);
            } else {
                Math.abs(rectF.centerY() - fArr2[1]);
            }
            vVar5.d(0.0f, 270.0f, 0.0f);
            (i11 != 1 ? i11 != 2 ? i11 != 3 ? mVar.j : mVar.f14023i : mVar.f14024l : mVar.k).getClass();
            vVar5.c(max, 0.0f);
            path4.reset();
            vVar5.b(matrixArr4[i11], path4);
            if (this.a && (f(path4, i11) || f(path4, i13))) {
                path4.op(path4, path3, Path.Op.DIFFERENCE);
                fArr2[0] = 0.0f;
                fArr2[1] = vVar5.a;
                matrixArr4[i11].mapPoints(fArr2);
                path2.moveTo(fArr2[0], fArr2[1]);
                vVar5.b(matrixArr4[i11], path2);
            } else {
                vVar5.b(matrixArr4[i11], path);
            }
            if (bVar != null) {
                Matrix matrix2 = matrixArr4[i11];
                bVar2 = bVar;
                lh.i iVar2 = (lh.i) bVar2.f18810e;
                z6 = false;
                iVar2.f14004w.set(i11 + 4, false);
                lh.u[] uVarArr2 = iVar2.f14003v;
                vVar5.a(vVar5.f14044e);
                uVarArr2[i11] = new lh.o(new ArrayList((ArrayList) vVar5.f14046g), new Matrix(matrix2));
            } else {
                bVar2 = bVar;
                z6 = false;
            }
            z5 = z6;
            bVar3 = bVar2;
            i11 = i12;
            vVarArr = vVarArr2;
            matrixArr2 = matrixArr5;
        }
        path.close();
        path2.close();
        if (path2.isEmpty()) {
            return;
        }
        path.op(path2, Path.Op.UNION);
    }

    public Timeline c() {
        ArrayList arrayList = (ArrayList) this.f9694c;
        if (arrayList.isEmpty()) {
            return Timeline.f5288d;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < arrayList.size(); i6++) {
            e1 e1Var = (e1) arrayList.get(i6);
            e1Var.f9668d = i5;
            i5 += e1Var.a.L.f15114e.o();
        }
        return new m1(arrayList, (nd.t0) this.k);
    }

    public void d() {
        Iterator it = ((HashSet) this.f9699h).iterator();
        while (it.hasNext()) {
            e1 e1Var = (e1) it.next();
            if (e1Var.f9667c.isEmpty()) {
                d1 d1Var = (d1) ((HashMap) this.f9697f).get(e1Var);
                if (d1Var != null) {
                    d1Var.a.c(d1Var.f9656b);
                }
                it.remove();
            }
        }
    }

    public void e(e1 e1Var) {
        if (e1Var.f9669e && e1Var.f9667c.isEmpty()) {
            d1 d1Var = (d1) ((HashMap) this.f9697f).remove(e1Var);
            d1Var.getClass();
            io.sentry.internal.debugmeta.c cVar = d1Var.f9657c;
            nd.a aVar = d1Var.a;
            aVar.p(d1Var.f9656b);
            aVar.s(cVar);
            aVar.r(cVar);
            ((HashSet) this.f9699h).remove(e1Var);
        }
    }

    public boolean f(Path path, int i5) {
        Path path2 = (Path) this.f9701l;
        path2.reset();
        ((lh.v[]) this.f9693b)[i5].b(((Matrix[]) this.f9694c)[i5], path2);
        RectF rectF = new RectF();
        path.computeBounds(rectF, true);
        path2.computeBounds(rectF, true);
        path.op(path2, Path.Op.INTERSECT);
        path.computeBounds(rectF, true);
        return !rectF.isEmpty() || (rectF.width() > 1.0f && rectF.height() > 1.0f);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v0, types: [hc.y0, nd.t] */
    public void g(e1 e1Var) {
        nd.o oVar = e1Var.a;
        ?? r12 = new nd.t() { // from class: hc.y0
            @Override // nd.t
            public final void a(nd.a aVar, Timeline timeline) {
                ((com.google.android.exoplayer2.e) f1.this.f9698g).E.d(22);
            }
        };
        io.sentry.internal.debugmeta.c cVar = new io.sentry.internal.debugmeta.c(10, this, e1Var);
        ((HashMap) this.f9697f).put(e1Var, new d1(oVar, r12, cVar));
        int i5 = ke.d0.a;
        Looper myLooper = Looper.myLooper();
        if (myLooper == null) {
            myLooper = Looper.getMainLooper();
        }
        Handler handler = new Handler(myLooper, null);
        oVar.getClass();
        a1.d dVar = oVar.f15056i;
        dVar.getClass();
        CopyOnWriteArrayList copyOnWriteArrayList = (CopyOnWriteArrayList) dVar.f16v;
        nd.w wVar = new nd.w();
        wVar.a = handler;
        wVar.f15191b = cVar;
        copyOnWriteArrayList.add(wVar);
        Looper myLooper2 = Looper.myLooper();
        if (myLooper2 == null) {
            myLooper2 = Looper.getMainLooper();
        }
        Handler handler2 = new Handler(myLooper2, null);
        nc.n nVar = oVar.f15057v;
        nVar.getClass();
        CopyOnWriteArrayList copyOnWriteArrayList2 = nVar.f15047c;
        nc.m mVar = new nc.m();
        mVar.a = handler2;
        mVar.f15045b = cVar;
        copyOnWriteArrayList2.add(mVar);
        oVar.k(r12, (ie.u0) this.f9701l, (ic.c0) this.f9693b);
    }

    public void h(nd.q qVar) {
        IdentityHashMap identityHashMap = (IdentityHashMap) this.f9695d;
        e1 e1Var = (e1) identityHashMap.remove(qVar);
        e1Var.getClass();
        e1Var.a.o(qVar);
        e1Var.f9667c.remove(((nd.l) qVar).f15124d);
        if (!identityHashMap.isEmpty()) {
            d();
        }
        e(e1Var);
    }

    public void i(int i5, int i6) {
        ArrayList arrayList = (ArrayList) this.f9694c;
        for (int i10 = i6 - 1; i10 >= i5; i10--) {
            e1 e1Var = (e1) arrayList.remove(i10);
            ((HashMap) this.f9696e).remove(e1Var.f9666b);
            int i11 = -e1Var.a.L.f15114e.o();
            for (int i12 = i10; i12 < arrayList.size(); i12++) {
                ((e1) arrayList.get(i12)).f9668d += i11;
            }
            e1Var.f9669e = true;
            if (this.a) {
                e(e1Var);
            }
        }
    }

    public f1(com.google.android.exoplayer2.e eVar, ic.a aVar, ke.a0 a0Var, ic.c0 c0Var) {
        this.f9693b = c0Var;
        this.f9698g = eVar;
        this.k = new nd.t0();
        this.f9695d = new IdentityHashMap();
        this.f9696e = new HashMap();
        this.f9694c = new ArrayList();
        this.f9700i = aVar;
        this.j = a0Var;
        this.f9697f = new HashMap();
        this.f9699h = new HashSet();
    }
}
