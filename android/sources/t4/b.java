package t4;

import af.h0;
import android.graphics.BlurMaskFilter;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RectF;
import android.os.Build;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import k2.r;
import l4.d0;
import l4.v;
import o4.q;

/* loaded from: classes.dex */
public abstract class b implements n4.e, o4.a, q4.f {
    public float A;
    public BlurMaskFilter B;
    public m4.a C;
    public final Path a = new Path();

    /* renamed from: b, reason: collision with root package name */
    public final Matrix f18171b = new Matrix();

    /* renamed from: c, reason: collision with root package name */
    public final Matrix f18172c = new Matrix();

    /* renamed from: d, reason: collision with root package name */
    public final m4.a f18173d = new m4.a(1, 0);

    /* renamed from: e, reason: collision with root package name */
    public final m4.a f18174e;

    /* renamed from: f, reason: collision with root package name */
    public final m4.a f18175f;

    /* renamed from: g, reason: collision with root package name */
    public final m4.a f18176g;

    /* renamed from: h, reason: collision with root package name */
    public final m4.a f18177h;

    /* renamed from: i, reason: collision with root package name */
    public final RectF f18178i;
    public final RectF j;
    public final RectF k;

    /* renamed from: l, reason: collision with root package name */
    public final RectF f18179l;

    /* renamed from: m, reason: collision with root package name */
    public final RectF f18180m;

    /* renamed from: n, reason: collision with root package name */
    public final Matrix f18181n;

    /* renamed from: o, reason: collision with root package name */
    public final v f18182o;

    /* renamed from: p, reason: collision with root package name */
    public final e f18183p;

    /* renamed from: q, reason: collision with root package name */
    public final r f18184q;

    /* renamed from: r, reason: collision with root package name */
    public final o4.i f18185r;

    /* renamed from: s, reason: collision with root package name */
    public b f18186s;

    /* renamed from: t, reason: collision with root package name */
    public b f18187t;

    /* renamed from: u, reason: collision with root package name */
    public List f18188u;

    /* renamed from: v, reason: collision with root package name */
    public final ArrayList f18189v;

    /* renamed from: w, reason: collision with root package name */
    public final q f18190w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f18191x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f18192y;

    /* renamed from: z, reason: collision with root package name */
    public m4.a f18193z;

    public b(v vVar, e eVar) {
        PorterDuff.Mode mode = PorterDuff.Mode.DST_IN;
        this.f18174e = new m4.a(mode);
        PorterDuff.Mode mode2 = PorterDuff.Mode.DST_OUT;
        this.f18175f = new m4.a(mode2);
        m4.a aVar = new m4.a(1, 0);
        this.f18176g = aVar;
        PorterDuff.Mode mode3 = PorterDuff.Mode.CLEAR;
        m4.a aVar2 = new m4.a();
        aVar2.setXfermode(new PorterDuffXfermode(mode3));
        this.f18177h = aVar2;
        this.f18178i = new RectF();
        this.j = new RectF();
        this.k = new RectF();
        this.f18179l = new RectF();
        this.f18180m = new RectF();
        this.f18181n = new Matrix();
        this.f18189v = new ArrayList();
        this.f18191x = true;
        this.A = 0.0f;
        this.f18182o = vVar;
        this.f18183p = eVar;
        List list = eVar.f18200h;
        if (eVar.f18211u == 3) {
            aVar.setXfermode(new PorterDuffXfermode(mode2));
        } else {
            aVar.setXfermode(new PorterDuffXfermode(mode));
        }
        r4.d dVar = eVar.f18201i;
        dVar.getClass();
        q qVar = new q(dVar);
        this.f18190w = qVar;
        qVar.b(this);
        if (list != null && !list.isEmpty()) {
            r rVar = new r(list);
            this.f18184q = rVar;
            Iterator it = ((ArrayList) rVar.f13142e).iterator();
            while (it.hasNext()) {
                ((o4.e) it.next()).a(this);
            }
            Iterator it2 = ((ArrayList) this.f18184q.f13143i).iterator();
            while (it2.hasNext()) {
                o4.e eVar2 = (o4.e) it2.next();
                f(eVar2);
                eVar2.a(this);
            }
        }
        e eVar3 = this.f18183p;
        if (eVar3.f18210t.isEmpty()) {
            if (true != this.f18191x) {
                this.f18191x = true;
                this.f18182o.invalidateSelf();
                return;
            }
            return;
        }
        o4.i iVar = new o4.i(eVar3.f18210t);
        this.f18185r = iVar;
        iVar.f15745b = true;
        iVar.a(new o4.a() { // from class: t4.a
            @Override // o4.a
            public final void a() {
                b bVar = b.this;
                boolean z5 = bVar.f18185r.k() == 1.0f;
                if (z5 != bVar.f18191x) {
                    bVar.f18191x = z5;
                    bVar.f18182o.invalidateSelf();
                }
            }
        });
        boolean z5 = ((Float) this.f18185r.e()).floatValue() == 1.0f;
        if (z5 != this.f18191x) {
            this.f18191x = z5;
            this.f18182o.invalidateSelf();
        }
        f(this.f18185r);
    }

    @Override // o4.a
    public final void a() {
        this.f18182o.invalidateSelf();
    }

    @Override // q4.f
    public void c(e4.e eVar, Object obj) {
        this.f18190w.c(eVar, obj);
    }

    @Override // q4.f
    public final void d(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
        b bVar = this.f18186s;
        e eVar3 = this.f18183p;
        if (bVar != null) {
            String str = bVar.f18183p.f18195c;
            q4.e eVar4 = new q4.e(eVar2);
            eVar4.a.add(str);
            if (eVar.a(i5, this.f18186s.f18183p.f18195c)) {
                b bVar2 = this.f18186s;
                q4.e eVar5 = new q4.e(eVar4);
                eVar5.f16681b = bVar2;
                arrayList.add(eVar5);
            }
            if (eVar.d(i5, eVar3.f18195c)) {
                this.f18186s.q(eVar, eVar.b(i5, this.f18186s.f18183p.f18195c) + i5, arrayList, eVar4);
            }
        }
        String str2 = eVar3.f18195c;
        String str3 = eVar3.f18195c;
        if (eVar.c(i5, str2)) {
            if (!"__container".equals(str3)) {
                q4.e eVar6 = new q4.e(eVar2);
                eVar6.a.add(str3);
                if (eVar.a(i5, str3)) {
                    q4.e eVar7 = new q4.e(eVar6);
                    eVar7.f16681b = this;
                    arrayList.add(eVar7);
                }
                eVar2 = eVar6;
            }
            if (eVar.d(i5, str3)) {
                q(eVar, eVar.b(i5, str3) + i5, arrayList, eVar2);
            }
        }
    }

    @Override // n4.e
    public void e(RectF rectF, Matrix matrix, boolean z5) {
        this.f18178i.set(0.0f, 0.0f, 0.0f, 0.0f);
        i();
        Matrix matrix2 = this.f18181n;
        matrix2.set(matrix);
        if (z5) {
            List list = this.f18188u;
            if (list != null) {
                for (int size = list.size() - 1; size >= 0; size--) {
                    matrix2.preConcat(((b) this.f18188u.get(size)).f18190w.e());
                }
            } else {
                b bVar = this.f18187t;
                if (bVar != null) {
                    matrix2.preConcat(bVar.f18190w.e());
                }
            }
        }
        matrix2.preConcat(this.f18190w.e());
    }

    public final void f(o4.e eVar) {
        if (eVar == null) {
            return;
        }
        this.f18189v.add(eVar);
    }

    /* JADX WARN: Removed duplicated region for block: B:180:0x0108  */
    /* JADX WARN: Removed duplicated region for block: B:181:0x010c  */
    @Override // n4.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void g(Canvas canvas, Matrix matrix, int i5) {
        float f2;
        int i6;
        m4.a aVar;
        PorterDuff.Mode mode;
        int i10;
        char c6;
        Integer num;
        if (this.f18191x) {
            e eVar = this.f18183p;
            boolean z5 = eVar.f18212v;
            int i11 = eVar.f18215y;
            if (z5) {
                return;
            }
            i();
            Matrix matrix2 = this.f18171b;
            matrix2.reset();
            matrix2.set(matrix);
            int i12 = 1;
            for (int size = this.f18188u.size() - 1; size >= 0; size--) {
                matrix2.preConcat(((b) this.f18188u.get(size)).f18190w.e());
            }
            q qVar = this.f18190w;
            o4.e eVar2 = qVar.j;
            int intValue = (int) ((((i5 / 255.0f) * ((eVar2 == null || (num = (Integer) eVar2.e()) == null) ? 100 : num.intValue())) / 100.0f) * 255.0f);
            if (this.f18186s == null && !n() && i11 == 1) {
                matrix2.preConcat(qVar.e());
                k(canvas, matrix2, intValue);
                o();
                return;
            }
            RectF rectF = this.f18178i;
            e(rectF, matrix2, false);
            if (this.f18186s != null && eVar.f18211u != 3) {
                RectF rectF2 = this.f18179l;
                rectF2.set(0.0f, 0.0f, 0.0f, 0.0f);
                this.f18186s.e(rectF2, matrix, true);
                if (!rectF.intersect(rectF2)) {
                    rectF.set(0.0f, 0.0f, 0.0f, 0.0f);
                }
            }
            matrix2.preConcat(qVar.e());
            RectF rectF3 = this.k;
            rectF3.set(0.0f, 0.0f, 0.0f, 0.0f);
            boolean n6 = n();
            r rVar = this.f18184q;
            Path path = this.a;
            int i13 = 2;
            if (n6) {
                int size2 = ((List) rVar.f13144v).size();
                int i14 = 0;
                while (true) {
                    if (i14 < size2) {
                        s4.f fVar = (s4.f) ((List) rVar.f13144v).get(i14);
                        Path path2 = (Path) ((o4.e) ((ArrayList) rVar.f13142e).get(i14)).e();
                        if (path2 != null) {
                            path.set(path2);
                            path.transform(matrix2);
                            int b10 = f0.e.b(fVar.a);
                            if (b10 != 0) {
                                if (b10 == i12) {
                                    break;
                                }
                                if (b10 != i13) {
                                    if (b10 == 3) {
                                        break;
                                    }
                                    RectF rectF4 = this.f18180m;
                                    path.computeBounds(rectF4, false);
                                    if (i14 != 0) {
                                        rectF3.set(rectF4);
                                    } else {
                                        i6 = size2;
                                        rectF3.set(Math.min(rectF3.left, rectF4.left), Math.min(rectF3.top, rectF4.top), Math.max(rectF3.right, rectF4.right), Math.max(rectF3.bottom, rectF4.bottom));
                                        i14++;
                                        size2 = i6;
                                        i13 = 2;
                                        i12 = 1;
                                    }
                                }
                            }
                            if (fVar.f17773d) {
                                break;
                            }
                            RectF rectF42 = this.f18180m;
                            path.computeBounds(rectF42, false);
                            if (i14 != 0) {
                            }
                        }
                        i6 = size2;
                        i14++;
                        size2 = i6;
                        i13 = 2;
                        i12 = 1;
                    } else if (!rectF.intersect(rectF3)) {
                        f2 = 0.0f;
                        rectF.set(0.0f, 0.0f, 0.0f, 0.0f);
                    }
                }
                f2 = 0.0f;
            } else {
                f2 = 0.0f;
            }
            float width = canvas.getWidth();
            float height = canvas.getHeight();
            RectF rectF5 = this.j;
            rectF5.set(f2, f2, width, height);
            Matrix matrix3 = this.f18172c;
            canvas.getMatrix(matrix3);
            if (!matrix3.isIdentity()) {
                matrix3.invert(matrix3);
                matrix3.mapRect(rectF5);
            }
            if (!rectF.intersect(rectF5)) {
                rectF.set(f2, f2, f2, f2);
            }
            if (rectF.width() >= 1.0f && rectF.height() >= 1.0f) {
                m4.a aVar2 = this.f18173d;
                aVar2.setAlpha(255);
                int b11 = f0.e.b(i11);
                b1.a aVar3 = b11 != 1 ? b11 != 2 ? b11 != 3 ? b11 != 4 ? b11 != 5 ? b11 != 16 ? null : b1.a.PLUS : b1.a.LIGHTEN : b1.a.DARKEN : b1.a.OVERLAY : b1.a.SCREEN : b1.a.MODULATE;
                int i15 = b1.d.a;
                int i16 = Build.VERSION.SDK_INT;
                if (i16 >= 29) {
                    ah.d.j(aVar2, aVar3 != null ? ah.d.h(aVar3) : null);
                } else if (aVar3 != null) {
                    switch (b1.b.a[aVar3.ordinal()]) {
                        case 1:
                            mode = PorterDuff.Mode.CLEAR;
                            break;
                        case 2:
                            mode = PorterDuff.Mode.SRC;
                            break;
                        case 3:
                            mode = PorterDuff.Mode.DST;
                            break;
                        case 4:
                            mode = PorterDuff.Mode.SRC_OVER;
                            break;
                        case 5:
                            mode = PorterDuff.Mode.DST_OVER;
                            break;
                        case 6:
                            mode = PorterDuff.Mode.SRC_IN;
                            break;
                        case 7:
                            mode = PorterDuff.Mode.DST_IN;
                            break;
                        case 8:
                            mode = PorterDuff.Mode.SRC_OUT;
                            break;
                        case 9:
                            mode = PorterDuff.Mode.DST_OUT;
                            break;
                        case 10:
                            mode = PorterDuff.Mode.SRC_ATOP;
                            break;
                        case 11:
                            mode = PorterDuff.Mode.DST_ATOP;
                            break;
                        case 12:
                            mode = PorterDuff.Mode.XOR;
                            break;
                        case 13:
                            mode = PorterDuff.Mode.ADD;
                            break;
                        case 14:
                            mode = PorterDuff.Mode.MULTIPLY;
                            break;
                        case 15:
                            mode = PorterDuff.Mode.SCREEN;
                            break;
                        case 16:
                            mode = PorterDuff.Mode.OVERLAY;
                            break;
                        case 17:
                            mode = PorterDuff.Mode.DARKEN;
                            break;
                        case 18:
                            mode = PorterDuff.Mode.LIGHTEN;
                            break;
                        default:
                            mode = null;
                            break;
                    }
                    aVar2.setXfermode(mode != null ? new PorterDuffXfermode(mode) : null);
                } else {
                    aVar2.setXfermode(null);
                }
                h0 h0Var = x4.h.a;
                canvas.saveLayer(rectF, aVar2);
                if (i11 != 2) {
                    j(canvas);
                    i10 = i16;
                } else {
                    if (this.C == null) {
                        m4.a aVar4 = new m4.a();
                        this.C = aVar4;
                        aVar4.setColor(-1);
                    }
                    i10 = i16;
                    canvas.drawRect(rectF.left - 1.0f, rectF.top - 1.0f, rectF.right + 1.0f, rectF.bottom + 1.0f, this.C);
                }
                k(canvas, matrix2, intValue);
                if (n()) {
                    Paint paint = this.f18174e;
                    canvas.saveLayer(rectF, paint);
                    if (i10 < 28) {
                        j(canvas);
                    }
                    int i17 = 0;
                    while (true) {
                        List list = (List) rVar.f13144v;
                        ArrayList arrayList = (ArrayList) rVar.f13142e;
                        if (i17 < list.size()) {
                            s4.f fVar2 = (s4.f) list.get(i17);
                            o4.e eVar3 = (o4.e) arrayList.get(i17);
                            o4.e eVar4 = (o4.e) ((ArrayList) rVar.f13143i).get(i17);
                            int i18 = i17;
                            int i19 = fVar2.a;
                            boolean z6 = fVar2.f17773d;
                            int b12 = f0.e.b(i19);
                            Paint paint2 = this.f18175f;
                            if (b12 != 0) {
                                if (b12 == 1) {
                                    if (i18 == 0) {
                                        aVar2.setColor(-16777216);
                                        aVar2.setAlpha(255);
                                        canvas.drawRect(rectF, aVar2);
                                    }
                                    if (z6) {
                                        h0 h0Var2 = x4.h.a;
                                        canvas.saveLayer(rectF, paint2);
                                        canvas.drawRect(rectF, aVar2);
                                        paint2.setAlpha((int) (((Integer) eVar4.e()).intValue() * 2.55f));
                                        path.set((Path) eVar3.e());
                                        path.transform(matrix2);
                                        canvas.drawPath(path, paint2);
                                        canvas.restore();
                                    } else {
                                        path.set((Path) eVar3.e());
                                        path.transform(matrix2);
                                        canvas.drawPath(path, paint2);
                                    }
                                } else if (b12 != 2) {
                                    if (b12 == 3) {
                                        if (arrayList.isEmpty()) {
                                            c6 = 4;
                                        } else {
                                            int i20 = 0;
                                            while (true) {
                                                if (i20 < list.size()) {
                                                    c6 = 4;
                                                    if (((s4.f) list.get(i20)).a == 4) {
                                                        i20++;
                                                    }
                                                } else {
                                                    c6 = 4;
                                                    aVar2.setAlpha(255);
                                                    canvas.drawRect(rectF, aVar2);
                                                }
                                            }
                                        }
                                    }
                                } else if (z6) {
                                    h0 h0Var3 = x4.h.a;
                                    canvas.saveLayer(rectF, paint);
                                    canvas.drawRect(rectF, aVar2);
                                    paint2.setAlpha((int) (((Integer) eVar4.e()).intValue() * 2.55f));
                                    path.set((Path) eVar3.e());
                                    path.transform(matrix2);
                                    canvas.drawPath(path, paint2);
                                    canvas.restore();
                                } else {
                                    h0 h0Var4 = x4.h.a;
                                    canvas.saveLayer(rectF, paint);
                                    path.set((Path) eVar3.e());
                                    path.transform(matrix2);
                                    aVar2.setAlpha((int) (((Integer) eVar4.e()).intValue() * 2.55f));
                                    canvas.drawPath(path, aVar2);
                                    canvas.restore();
                                }
                            } else if (z6) {
                                h0 h0Var5 = x4.h.a;
                                canvas.saveLayer(rectF, aVar2);
                                canvas.drawRect(rectF, aVar2);
                                path.set((Path) eVar3.e());
                                path.transform(matrix2);
                                aVar2.setAlpha((int) (((Integer) eVar4.e()).intValue() * 2.55f));
                                canvas.drawPath(path, paint2);
                                canvas.restore();
                            } else {
                                path.set((Path) eVar3.e());
                                path.transform(matrix2);
                                aVar2.setAlpha((int) (((Integer) eVar4.e()).intValue() * 2.55f));
                                canvas.drawPath(path, aVar2);
                            }
                            i17 = i18 + 1;
                        } else {
                            canvas.restore();
                        }
                    }
                }
                if (this.f18186s != null) {
                    canvas.saveLayer(rectF, this.f18176g);
                    j(canvas);
                    this.f18186s.g(canvas, matrix, intValue);
                    canvas.restore();
                }
                canvas.restore();
            }
            if (this.f18192y && (aVar = this.f18193z) != null) {
                aVar.setStyle(Paint.Style.STROKE);
                this.f18193z.setColor(-251901);
                this.f18193z.setStrokeWidth(4.0f);
                canvas.drawRect(rectF, this.f18193z);
                this.f18193z.setStyle(Paint.Style.FILL);
                this.f18193z.setColor(1357638635);
                canvas.drawRect(rectF, this.f18193z);
            }
            o();
        }
    }

    public final void i() {
        if (this.f18188u != null) {
            return;
        }
        if (this.f18187t == null) {
            this.f18188u = Collections.EMPTY_LIST;
            return;
        }
        this.f18188u = new ArrayList();
        for (b bVar = this.f18187t; bVar != null; bVar = bVar.f18187t) {
            this.f18188u.add(bVar);
        }
    }

    public final void j(Canvas canvas) {
        RectF rectF = this.f18178i;
        canvas.drawRect(rectF.left - 1.0f, rectF.top - 1.0f, rectF.right + 1.0f, rectF.bottom + 1.0f, this.f18177h);
    }

    public abstract void k(Canvas canvas, Matrix matrix, int i5);

    public r3.g l() {
        return this.f18183p.f18213w;
    }

    public am.f m() {
        return this.f18183p.f18214x;
    }

    public final boolean n() {
        r rVar = this.f18184q;
        return (rVar == null || ((ArrayList) rVar.f13142e).isEmpty()) ? false : true;
    }

    public final void o() {
        d0 d0Var = this.f18182o.f13787d.a;
        String str = this.f18183p.f18195c;
        HashMap hashMap = d0Var.f13713c;
        if (d0Var.a) {
            x4.f fVar = (x4.f) hashMap.get(str);
            if (fVar == null) {
                fVar = new x4.f();
                hashMap.put(str, fVar);
            }
            int i5 = fVar.a + 1;
            fVar.a = i5;
            if (i5 == Integer.MAX_VALUE) {
                fVar.a = i5 / 2;
            }
            if (str.equals("__container")) {
                s.f fVar2 = d0Var.f13712b;
                fVar2.getClass();
                s.a aVar = new s.a(fVar2);
                if (aVar.hasNext()) {
                    aVar.next().getClass();
                    throw new ClassCastException();
                }
            }
        }
    }

    public final void p(o4.e eVar) {
        this.f18189v.remove(eVar);
    }

    public void r(boolean z5) {
        if (z5 && this.f18193z == null) {
            this.f18193z = new m4.a();
        }
        this.f18192y = z5;
    }

    public void s(float f2) {
        q qVar = this.f18190w;
        o4.e eVar = qVar.j;
        if (eVar != null) {
            eVar.i(f2);
        }
        o4.e eVar2 = qVar.f15788m;
        if (eVar2 != null) {
            eVar2.i(f2);
        }
        o4.e eVar3 = qVar.f15789n;
        if (eVar3 != null) {
            eVar3.i(f2);
        }
        o4.e eVar4 = qVar.f15783f;
        if (eVar4 != null) {
            eVar4.i(f2);
        }
        o4.e eVar5 = qVar.f15784g;
        if (eVar5 != null) {
            eVar5.i(f2);
        }
        o4.e eVar6 = qVar.f15785h;
        if (eVar6 != null) {
            eVar6.i(f2);
        }
        o4.e eVar7 = qVar.f15786i;
        if (eVar7 != null) {
            eVar7.i(f2);
        }
        o4.i iVar = qVar.k;
        if (iVar != null) {
            iVar.i(f2);
        }
        o4.i iVar2 = qVar.f15787l;
        if (iVar2 != null) {
            iVar2.i(f2);
        }
        int i5 = 0;
        r rVar = this.f18184q;
        if (rVar != null) {
            ArrayList arrayList = (ArrayList) rVar.f13142e;
            for (int i6 = 0; i6 < arrayList.size(); i6++) {
                ((o4.e) arrayList.get(i6)).i(f2);
            }
        }
        o4.i iVar3 = this.f18185r;
        if (iVar3 != null) {
            iVar3.i(f2);
        }
        b bVar = this.f18186s;
        if (bVar != null) {
            bVar.s(f2);
        }
        while (true) {
            ArrayList arrayList2 = this.f18189v;
            if (i5 >= arrayList2.size()) {
                return;
            }
            ((o4.e) arrayList2.get(i5)).i(f2);
            i5++;
        }
    }

    @Override // n4.c
    public final void b(List list, List list2) {
    }

    public void q(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
    }
}
