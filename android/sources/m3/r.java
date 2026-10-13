package m3;

import android.view.animation.AnimationUtils;
import androidx.dynamicanimation.animation.SpringAnimation;
import androidx.transition.Transition;
import java.util.ArrayList;
import java.util.Arrays;

/* loaded from: classes.dex */
public final class r extends u {

    /* renamed from: b, reason: collision with root package name */
    public boolean f14378b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f14379c;

    /* renamed from: e, reason: collision with root package name */
    public SpringAnimation f14381e;

    /* renamed from: f, reason: collision with root package name */
    public final a1.d f14382f;

    /* renamed from: g, reason: collision with root package name */
    public Runnable f14383g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ z f14384h;
    public long a = -1;

    /* renamed from: d, reason: collision with root package name */
    public int f14380d = 0;

    public r(z zVar) {
        this.f14384h = zVar;
        a1.d dVar = new a1.d(11, (byte) 0);
        long[] jArr = new long[20];
        dVar.f15i = jArr;
        dVar.f16v = new float[20];
        dVar.f14e = 0;
        Arrays.fill(jArr, Long.MIN_VALUE);
        this.f14382f = dVar;
    }

    public final void a() {
        if (this.f14378b) {
            b();
            this.f14381e.a(this.f14384h.W + 1);
        } else {
            this.f14380d = 1;
            this.f14383g = null;
        }
    }

    public final void b() {
        int i5;
        if (this.f14381e != null) {
            return;
        }
        long currentAnimationTimeMillis = AnimationUtils.currentAnimationTimeMillis();
        float f2 = this.a;
        a1.d dVar = this.f14382f;
        int i6 = dVar.f14e;
        float[] fArr = (float[]) dVar.f16v;
        long[] jArr = (long[]) dVar.f15i;
        char c6 = 20;
        int i10 = (i6 + 1) % 20;
        dVar.f14e = i10;
        jArr[i10] = currentAnimationTimeMillis;
        fArr[i10] = f2;
        this.f14381e = new SpringAnimation(new j2.h());
        j2.i iVar = new j2.i();
        iVar.a(1.0f);
        iVar.b(200.0f);
        SpringAnimation springAnimation = this.f14381e;
        springAnimation.f1884m = iVar;
        springAnimation.f1875b = this.a;
        springAnimation.f1876c = true;
        ArrayList arrayList = springAnimation.f1883l;
        if (springAnimation.f1879f) {
            throw new UnsupportedOperationException("Error: Update listeners must be added beforethe animation.");
        }
        if (!arrayList.contains(this)) {
            arrayList.add(this);
        }
        SpringAnimation springAnimation2 = this.f14381e;
        int i11 = dVar.f14e;
        long j = Long.MIN_VALUE;
        float f10 = 0.0f;
        if (i11 != 0 || jArr[i11] != Long.MIN_VALUE) {
            long j5 = jArr[i11];
            int i12 = 0;
            long j7 = j5;
            while (true) {
                long j10 = jArr[i11];
                if (j10 != j) {
                    float f11 = j5 - j10;
                    float abs = Math.abs(j10 - j7);
                    if (f11 > 100.0f || abs > 40.0f) {
                        break;
                    }
                    if (i11 == 0) {
                        i11 = 20;
                    }
                    i11--;
                    i12++;
                    if (i12 >= 20) {
                        break;
                    }
                    j7 = j10;
                    j = Long.MIN_VALUE;
                } else {
                    break;
                }
            }
            if (i12 >= 2) {
                float f12 = 1000.0f;
                if (i12 == 2) {
                    int i13 = dVar.f14e;
                    int i14 = i13 == 0 ? 19 : i13 - 1;
                    float f13 = jArr[i13] - jArr[i14];
                    if (f13 != 0.0f) {
                        f10 = ((fArr[i13] - fArr[i14]) / f13) * 1000.0f;
                    }
                } else {
                    int i15 = dVar.f14e;
                    int i16 = ((i15 - i12) + 21) % 20;
                    int i17 = (i15 + 21) % 20;
                    long j11 = jArr[i16];
                    float f14 = fArr[i16];
                    int i18 = i16 + 1;
                    int i19 = i18 % 20;
                    float f15 = 0.0f;
                    while (i19 != i17) {
                        long j12 = jArr[i19];
                        char c8 = c6;
                        float f16 = f12;
                        float f17 = j12 - j11;
                        if (f17 == f10) {
                            i5 = i18;
                        } else {
                            float f18 = fArr[i19];
                            int i20 = i18;
                            float f19 = (f18 - f14) / f17;
                            float abs2 = (Math.abs(f19) * (f19 - ((float) (Math.sqrt(2.0f * Math.abs(f15)) * Math.signum(f15))))) + f15;
                            i5 = i20;
                            if (i19 == i5) {
                                abs2 *= 0.5f;
                            }
                            f15 = abs2;
                            f14 = f18;
                            j11 = j12;
                        }
                        i19 = (i19 + 1) % 20;
                        i18 = i5;
                        c6 = c8;
                        f12 = f16;
                        f10 = 0.0f;
                    }
                    f10 = ((float) (Math.sqrt(Math.abs(f15) * 2.0f) * Math.signum(f15))) * f12;
                }
            }
        }
        springAnimation2.a = f10;
        SpringAnimation springAnimation3 = this.f14381e;
        springAnimation3.f1880g = this.f14384h.W + 1;
        springAnimation3.f1881h = -1.0f;
        springAnimation3.j = 4.0f;
        q qVar = new q(0, this);
        ArrayList arrayList2 = springAnimation3.k;
        if (arrayList2.contains(qVar)) {
            return;
        }
        arrayList2.add(qVar);
    }

    @Override // m3.u, m3.s
    public final void onTransitionCancel(Transition transition) {
        this.f14379c = true;
    }
}
