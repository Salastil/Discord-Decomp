package vc;

import androidx.recyclerview.widget.h;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import com.reactnativecommunity.clipboard.ClipboardModule;
import fi.r0;
import hc.f0;
import hc.g1;
import ke.w;
import org.xmlpull.v1.XmlPullParserException;
import qc.g;
import qc.j;
import qc.k;
import qc.l;
import qc.m;
import qc.n;
import qc.v;

/* loaded from: classes3.dex */
public final class a implements j {

    /* renamed from: b, reason: collision with root package name */
    public l f19322b;

    /* renamed from: c, reason: collision with root package name */
    public int f19323c;

    /* renamed from: d, reason: collision with root package name */
    public int f19324d;

    /* renamed from: e, reason: collision with root package name */
    public int f19325e;

    /* renamed from: g, reason: collision with root package name */
    public jd.b f19327g;

    /* renamed from: h, reason: collision with root package name */
    public k f19328h;

    /* renamed from: i, reason: collision with root package name */
    public h f19329i;
    public yc.l j;
    public final w a = new w(6);

    /* renamed from: f, reason: collision with root package name */
    public long f19326f = -1;

    @Override // qc.j
    public final void a(l lVar) {
        this.f19322b = lVar;
    }

    public final void b() {
        c(new dd.b[0]);
        l lVar = this.f19322b;
        lVar.getClass();
        lVar.r();
        this.f19322b.c(new n(-9223372036854775807L));
        this.f19323c = 6;
    }

    public final void c(dd.b... bVarArr) {
        l lVar = this.f19322b;
        lVar.getClass();
        v y5 = lVar.y(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET, 4);
        f0 f0Var = new f0();
        f0Var.j = ClipboardModule.MIMETYPE_JPEG;
        f0Var.f9677i = new Metadata(bVarArr);
        y5.e(new Format(f0Var));
    }

    /* JADX WARN: Removed duplicated region for block: B:52:0x015e  */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int e(k kVar, m mVar) {
        String p3;
        h hVar;
        r0 r0Var;
        int i5;
        jd.b bVar;
        long j;
        int i6 = this.f19323c;
        w wVar = this.a;
        if (i6 == 0) {
            wVar.C(2);
            ((g) kVar).a(wVar.a, 0, 2, false);
            int z5 = wVar.z();
            this.f19324d = z5;
            if (z5 == 65498) {
                if (this.f19326f != -1) {
                    this.f19323c = 4;
                    return 0;
                }
                b();
                return 0;
            }
            if ((z5 < 65488 || z5 > 65497) && z5 != 65281) {
                this.f19323c = 1;
            }
            return 0;
        }
        if (i6 == 1) {
            wVar.C(2);
            ((g) kVar).a(wVar.a, 0, 2, false);
            this.f19325e = wVar.z() - 2;
            this.f19323c = 2;
            return 0;
        }
        if (i6 != 2) {
            if (i6 != 4) {
                if (i6 != 5) {
                    if (i6 == 6) {
                        return -1;
                    }
                    throw new IllegalStateException();
                }
                if (this.f19329i == null || kVar != this.f19328h) {
                    this.f19328h = kVar;
                    this.f19329i = new h(kVar, this.f19326f);
                }
                yc.l lVar = this.j;
                lVar.getClass();
                int e9 = lVar.e(this.f19329i, mVar);
                if (e9 == 1) {
                    mVar.a += this.f19326f;
                }
                return e9;
            }
            long j5 = ((g) kVar).f16773v;
            long j7 = this.f19326f;
            if (j5 != j7) {
                mVar.a = j7;
                return 1;
            }
            g gVar = (g) kVar;
            if (!gVar.j(wVar.a, 0, 1, true)) {
                b();
                return 0;
            }
            gVar.f16775x = 0;
            if (this.j == null) {
                this.j = new yc.l(0);
            }
            h hVar2 = new h(kVar, this.f19326f);
            this.f19329i = hVar2;
            this.j.getClass();
            if (!yc.j.j(hVar2, false, false)) {
                b();
                return 0;
            }
            yc.l lVar2 = this.j;
            long j10 = this.f19326f;
            l lVar3 = this.f19322b;
            lVar3.getClass();
            lVar2.f20826q = new h(j10, lVar3, 6);
            jd.b bVar2 = this.f19327g;
            bVar2.getClass();
            c(bVar2);
            this.f19323c = 5;
            return 0;
        }
        if (this.f19324d == 65505) {
            w wVar2 = new w(this.f19325e);
            ((g) kVar).a(wVar2.a, 0, this.f19325e, false);
            if (this.f19327g == null && "http://ns.adobe.com/xap/1.0/".equals(wVar2.p()) && (p3 = wVar2.p()) != null) {
                long j11 = ((g) kVar).f16772i;
                if (j11 != -1) {
                    try {
                        hVar = d.a(p3);
                    } catch (g1 | NumberFormatException | XmlPullParserException unused) {
                        ke.b.N("MotionPhotoXmpParser", "Ignoring unexpected XMP metadata");
                        hVar = null;
                    }
                    if (hVar != null && (i5 = (r0Var = (r0) hVar.f2402i).f8706v) >= 2) {
                        int i10 = i5 - 1;
                        long j12 = -1;
                        long j13 = -1;
                        long j14 = -1;
                        long j15 = -1;
                        boolean z6 = false;
                        while (i10 >= 0) {
                            b bVar3 = (b) r0Var.get(i10);
                            boolean equals = "video/mp4".equals(bVar3.a) | z6;
                            if (i10 == 0) {
                                j11 -= bVar3.f19331c;
                                j = 0;
                            } else {
                                j = j11 - bVar3.f19330b;
                            }
                            long j16 = j;
                            long j17 = j11;
                            j11 = j16;
                            if (equals && j11 != j17) {
                                j15 = j17 - j11;
                                j14 = j11;
                                equals = false;
                            }
                            if (i10 == 0) {
                                j12 = j11;
                                j13 = j17;
                            }
                            i10--;
                            z6 = equals;
                        }
                        if (j14 != -1 && j15 != -1 && j12 != -1 && j13 != -1) {
                            bVar = new jd.b(j12, j13, hVar.f2401e, j14, j15);
                            this.f19327g = bVar;
                            if (bVar != null) {
                                this.f19326f = bVar.f12708v;
                            }
                        }
                    }
                }
                bVar = null;
                this.f19327g = bVar;
                if (bVar != null) {
                }
            }
        } else {
            ((g) kVar).u(this.f19325e);
        }
        this.f19323c = 0;
        return 0;
    }

    @Override // qc.j
    public final boolean f(k kVar) {
        g gVar = (g) kVar;
        w wVar = this.a;
        wVar.C(2);
        gVar.j(wVar.a, 0, 2, false);
        if (wVar.z() == 65496) {
            wVar.C(2);
            gVar.j(wVar.a, 0, 2, false);
            int z5 = wVar.z();
            this.f19324d = z5;
            if (z5 == 65504) {
                wVar.C(2);
                gVar.j(wVar.a, 0, 2, false);
                gVar.b(wVar.z() - 2, false);
                wVar.C(2);
                gVar.j(wVar.a, 0, 2, false);
                this.f19324d = wVar.z();
            }
            if (this.f19324d == 65505) {
                gVar.b(2, false);
                wVar.C(6);
                gVar.j(wVar.a, 0, 6, false);
                if (wVar.v() == 1165519206 && wVar.z() == 0) {
                    return true;
                }
            }
        }
        return false;
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        if (j == 0) {
            this.f19323c = 0;
            this.j = null;
        } else if (this.f19323c == 5) {
            yc.l lVar = this.j;
            lVar.getClass();
            lVar.g(j, j5);
        }
    }

    @Override // qc.j
    public final void release() {
        yc.l lVar = this.j;
        if (lVar != null) {
            lVar.getClass();
        }
    }
}
