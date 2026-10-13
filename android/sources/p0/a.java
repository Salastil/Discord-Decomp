package p0;

import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.FrameLayout;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import java.util.Arrays;
import java.util.List;
import k2.r;
import kotlin.jvm.internal.Intrinsics;
import s4.h;
import wm.f;
import wm.g;
import wm.m;

/* loaded from: classes.dex */
public final class a implements g {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public int f16260b;

    /* renamed from: c, reason: collision with root package name */
    public int f16261c;

    /* renamed from: d, reason: collision with root package name */
    public int f16262d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f16263e;

    /* renamed from: f, reason: collision with root package name */
    public int f16264f;

    /* renamed from: g, reason: collision with root package name */
    public final Object f16265g;

    /* renamed from: h, reason: collision with root package name */
    public final Object f16266h;

    /* renamed from: i, reason: collision with root package name */
    public Object f16267i;
    public Object j;
    public Object k;

    public a(m dialog, f container, FrameLayout frameLayout, eightbitlab.com.blurview.f fVar) {
        this.a = 1;
        Intrinsics.checkNotNullParameter(dialog, "dialog");
        Intrinsics.checkNotNullParameter(container, "container");
        this.f16265g = dialog;
        this.f16266h = container;
        this.f16267i = frameLayout;
        this.j = fVar;
    }

    public void a(e eVar, float f2, boolean z5) {
        b bVar = (b) this.f16265g;
        if (f2 <= -0.001f || f2 >= 0.001f) {
            int i5 = this.f16262d;
            if (i5 == -1) {
                this.f16262d = 0;
                ((float[]) this.k)[0] = f2;
                ((int[]) this.f16267i)[0] = eVar.f16292e;
                ((int[]) this.j)[0] = -1;
                eVar.H++;
                eVar.a(bVar);
                this.f16260b++;
                if (this.f16263e) {
                    return;
                }
                int i6 = this.f16264f + 1;
                this.f16264f = i6;
                int[] iArr = (int[]) this.f16267i;
                if (i6 >= iArr.length) {
                    this.f16263e = true;
                    this.f16264f = iArr.length - 1;
                    return;
                }
                return;
            }
            int i10 = -1;
            for (int i11 = 0; i5 != -1 && i11 < this.f16260b; i11++) {
                int i12 = ((int[]) this.f16267i)[i5];
                int i13 = eVar.f16292e;
                if (i12 == i13) {
                    float[] fArr = (float[]) this.k;
                    float f10 = fArr[i5] + f2;
                    if (f10 > -0.001f && f10 < 0.001f) {
                        f10 = 0.0f;
                    }
                    fArr[i5] = f10;
                    if (f10 == 0.0f) {
                        if (i5 == this.f16262d) {
                            this.f16262d = ((int[]) this.j)[i5];
                        } else {
                            int[] iArr2 = (int[]) this.j;
                            iArr2[i10] = iArr2[i5];
                        }
                        if (z5) {
                            eVar.b(bVar);
                        }
                        if (this.f16263e) {
                            this.f16264f = i5;
                        }
                        eVar.H--;
                        this.f16260b--;
                        return;
                    }
                    return;
                }
                if (i12 < i13) {
                    i10 = i5;
                }
                i5 = ((int[]) this.j)[i5];
            }
            int i14 = this.f16264f;
            int i15 = i14 + 1;
            if (this.f16263e) {
                int[] iArr3 = (int[]) this.f16267i;
                if (iArr3[i14] != -1) {
                    i14 = iArr3.length;
                }
            } else {
                i14 = i15;
            }
            int[] iArr4 = (int[]) this.f16267i;
            if (i14 >= iArr4.length && this.f16260b < iArr4.length) {
                int i16 = 0;
                while (true) {
                    int[] iArr5 = (int[]) this.f16267i;
                    if (i16 >= iArr5.length) {
                        break;
                    }
                    if (iArr5[i16] == -1) {
                        i14 = i16;
                        break;
                    }
                    i16++;
                }
            }
            int[] iArr6 = (int[]) this.f16267i;
            if (i14 >= iArr6.length) {
                i14 = iArr6.length;
                int i17 = this.f16261c * 2;
                this.f16261c = i17;
                this.f16263e = false;
                this.f16264f = i14 - 1;
                this.k = Arrays.copyOf((float[]) this.k, i17);
                this.f16267i = Arrays.copyOf((int[]) this.f16267i, this.f16261c);
                this.j = Arrays.copyOf((int[]) this.j, this.f16261c);
            }
            ((int[]) this.f16267i)[i14] = eVar.f16292e;
            ((float[]) this.k)[i14] = f2;
            if (i10 != -1) {
                int[] iArr7 = (int[]) this.j;
                iArr7[i14] = iArr7[i10];
                iArr7[i10] = i14;
            } else {
                ((int[]) this.j)[i14] = this.f16262d;
                this.f16262d = i14;
            }
            eVar.H++;
            eVar.a(bVar);
            this.f16260b++;
            if (!this.f16263e) {
                this.f16264f++;
            }
            int i18 = this.f16264f;
            int[] iArr8 = (int[]) this.f16267i;
            if (i18 >= iArr8.length) {
                this.f16263e = true;
                this.f16264f = iArr8.length - 1;
            }
        }
    }

    public void b() {
        int i5 = this.f16262d;
        for (int i6 = 0; i5 != -1 && i6 < this.f16260b; i6++) {
            e eVar = ((e[]) ((r) this.f16266h).f13144v)[((int[]) this.f16267i)[i5]];
            if (eVar != null) {
                eVar.b((b) this.f16265g);
            }
            i5 = ((int[]) this.j)[i5];
        }
        this.f16262d = -1;
        this.f16264f = -1;
        this.f16263e = false;
        this.f16260b = 0;
    }

    public float c(e eVar) {
        int i5 = this.f16262d;
        for (int i6 = 0; i5 != -1 && i6 < this.f16260b; i6++) {
            if (((int[]) this.f16267i)[i5] == eVar.f16292e) {
                return ((float[]) this.k)[i5];
            }
            i5 = ((int[]) this.j)[i5];
        }
        return 0.0f;
    }

    public int d() {
        return this.f16260b;
    }

    public e e(int i5) {
        int i6 = this.f16262d;
        for (int i10 = 0; i6 != -1 && i10 < this.f16260b; i10++) {
            if (i10 == i5) {
                return ((e[]) ((r) this.f16266h).f13144v)[((int[]) this.f16267i)[i6]];
            }
            i6 = ((int[]) this.j)[i6];
        }
        return null;
    }

    public float f(int i5) {
        int i6 = this.f16262d;
        for (int i10 = 0; i6 != -1 && i10 < this.f16260b; i10++) {
            if (i10 == i5) {
                return ((float[]) this.k)[i6];
            }
            i6 = ((int[]) this.j)[i6];
        }
        return 0.0f;
    }

    public void g(e eVar, float f2) {
        b bVar = (b) this.f16265g;
        if (f2 == 0.0f) {
            h(eVar, true);
            return;
        }
        int i5 = this.f16262d;
        if (i5 == -1) {
            this.f16262d = 0;
            ((float[]) this.k)[0] = f2;
            ((int[]) this.f16267i)[0] = eVar.f16292e;
            ((int[]) this.j)[0] = -1;
            eVar.H++;
            eVar.a(bVar);
            this.f16260b++;
            if (this.f16263e) {
                return;
            }
            int i6 = this.f16264f + 1;
            this.f16264f = i6;
            int[] iArr = (int[]) this.f16267i;
            if (i6 >= iArr.length) {
                this.f16263e = true;
                this.f16264f = iArr.length - 1;
                return;
            }
            return;
        }
        int i10 = -1;
        for (int i11 = 0; i5 != -1 && i11 < this.f16260b; i11++) {
            int i12 = ((int[]) this.f16267i)[i5];
            int i13 = eVar.f16292e;
            if (i12 == i13) {
                ((float[]) this.k)[i5] = f2;
                return;
            }
            if (i12 < i13) {
                i10 = i5;
            }
            i5 = ((int[]) this.j)[i5];
        }
        int i14 = this.f16264f;
        int i15 = i14 + 1;
        if (this.f16263e) {
            int[] iArr2 = (int[]) this.f16267i;
            if (iArr2[i14] != -1) {
                i14 = iArr2.length;
            }
        } else {
            i14 = i15;
        }
        int[] iArr3 = (int[]) this.f16267i;
        if (i14 >= iArr3.length && this.f16260b < iArr3.length) {
            int i16 = 0;
            while (true) {
                int[] iArr4 = (int[]) this.f16267i;
                if (i16 >= iArr4.length) {
                    break;
                }
                if (iArr4[i16] == -1) {
                    i14 = i16;
                    break;
                }
                i16++;
            }
        }
        int[] iArr5 = (int[]) this.f16267i;
        if (i14 >= iArr5.length) {
            i14 = iArr5.length;
            int i17 = this.f16261c * 2;
            this.f16261c = i17;
            this.f16263e = false;
            this.f16264f = i14 - 1;
            this.k = Arrays.copyOf((float[]) this.k, i17);
            this.f16267i = Arrays.copyOf((int[]) this.f16267i, this.f16261c);
            this.j = Arrays.copyOf((int[]) this.j, this.f16261c);
        }
        ((int[]) this.f16267i)[i14] = eVar.f16292e;
        ((float[]) this.k)[i14] = f2;
        if (i10 != -1) {
            int[] iArr6 = (int[]) this.j;
            iArr6[i14] = iArr6[i10];
            iArr6[i10] = i14;
        } else {
            ((int[]) this.j)[i14] = this.f16262d;
            this.f16262d = i14;
        }
        eVar.H++;
        eVar.a(bVar);
        int i18 = this.f16260b + 1;
        this.f16260b = i18;
        if (!this.f16263e) {
            this.f16264f++;
        }
        int[] iArr7 = (int[]) this.f16267i;
        if (i18 >= iArr7.length) {
            this.f16263e = true;
        }
        if (this.f16264f >= iArr7.length) {
            this.f16263e = true;
            this.f16264f = iArr7.length - 1;
        }
    }

    public float h(e eVar, boolean z5) {
        int i5 = this.f16262d;
        if (i5 == -1) {
            return 0.0f;
        }
        int i6 = 0;
        int i10 = -1;
        while (i5 != -1 && i6 < this.f16260b) {
            if (((int[]) this.f16267i)[i5] == eVar.f16292e) {
                if (i5 == this.f16262d) {
                    this.f16262d = ((int[]) this.j)[i5];
                } else {
                    int[] iArr = (int[]) this.j;
                    iArr[i10] = iArr[i5];
                }
                if (z5) {
                    eVar.b((b) this.f16265g);
                }
                eVar.H--;
                this.f16260b--;
                ((int[]) this.f16267i)[i5] = -1;
                if (this.f16263e) {
                    this.f16264f = i5;
                }
                return ((float[]) this.k)[i5];
            }
            i6++;
            i10 = i5;
            i5 = ((int[]) this.j)[i5];
        }
        return 0.0f;
    }

    /* JADX WARN: Code restructure failed: missing block: B:53:0x0153, code lost:
    
        if (r2 < 0) goto L60;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x0155, code lost:
    
        r3 = r7;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x0171, code lost:
    
        if (r2 < 0) goto L60;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x017a, code lost:
    
        if (r2 < 0) goto L60;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void i() {
        int i5;
        int i6;
        boolean z5;
        int i10;
        View decorView;
        f fVar = (f) this.f16266h;
        Window window = ((m) this.f16265g).getWindow();
        int height = (window == null || (decorView = window.getDecorView()) == null) ? 0 : decorView.getHeight();
        if (height <= 0) {
            return;
        }
        br.a detents = (br.a) this.k;
        if (detents != null) {
            List list = detents.f3155d;
            eightbitlab.com.blurview.f fVar2 = (eightbitlab.com.blurview.f) this.j;
            if (fVar2 != null) {
                int i11 = this.f16264f;
                int i12 = this.f16261c;
                int i13 = this.f16262d;
                boolean z6 = this.f16263e;
                BottomSheetBehavior bottomSheetBehavior = (BottomSheetBehavior) fVar2.f8129e;
                Intrinsics.checkNotNullParameter(detents, "detents");
                fVar2.a = list.size();
                if (height > 0) {
                    if (detents.a()) {
                        bottomSheetBehavior.J = true;
                        bottomSheetBehavior.L(true);
                        if (i11 <= 0 || (i10 = i11 + i12) > height) {
                            i10 = height;
                        }
                        bottomSheetBehavior.f5968l = i10;
                        bottomSheetBehavior.P(3);
                    } else {
                        int size = list.size();
                        if (size == 1) {
                            bottomSheetBehavior.J = true;
                            bottomSheetBehavior.L(true);
                            bottomSheetBehavior.f5968l = detents.b(height);
                            bottomSheetBehavior.P(3);
                        } else if (size == 2) {
                            bottomSheetBehavior.J = false;
                            bottomSheetBehavior.L(true);
                            bottomSheetBehavior.O((int) (((Number) list.get(0)).doubleValue() * height));
                            bottomSheetBehavior.f5968l = detents.b(height);
                            if (z6) {
                                bottomSheetBehavior.P(eightbitlab.com.blurview.f.d(i13, list.size()));
                            }
                        } else {
                            if (size != 3) {
                                throw new IllegalStateException(h.e(list.size(), "[RNScreens] Unsupported detent count ", "."));
                            }
                            bottomSheetBehavior.J = false;
                            bottomSheetBehavior.L(false);
                            double d6 = height;
                            bottomSheetBehavior.O((int) (((Number) list.get(0)).doubleValue() * d6));
                            if (list.size() != 3) {
                                throw new IllegalStateException("[RNScreens] Exactly 3 detents are required for halfExpandedRatio.");
                            }
                            bottomSheetBehavior.M((float) (((Number) list.get(1)).doubleValue() / ((Number) list.get(2)).doubleValue()));
                            if (list.size() != 3) {
                                throw new IllegalStateException("[RNScreens] Exactly 3 detents are required for expandedOffsetFromTop.");
                            }
                            bottomSheetBehavior.K((int) ((1 - ((Number) list.get(2)).doubleValue()) * d6));
                            bottomSheetBehavior.f5968l = detents.b(height);
                            if (z6) {
                                bottomSheetBehavior.P(eightbitlab.com.blurview.f.d(i13, list.size()));
                            }
                        }
                    }
                    ((FrameLayout) fVar2.f8127c).requestLayout();
                }
                z5 = 0;
            } else {
                z5 = 0;
            }
            this.f16263e = z5;
            i5 = z5;
        } else {
            i5 = 0;
        }
        br.a aVar = (br.a) this.k;
        if (aVar != null) {
            int i14 = this.f16260b;
            int i15 = this.f16261c;
            int i16 = this.f16264f;
            if (aVar.a()) {
                if (i16 <= 0) {
                    height = (height - i14) - i15;
                } else if (i16 <= height) {
                    i6 = i16;
                }
                i6 = height;
            } else {
                int b10 = i14 - (height - aVar.b(height));
                if (b10 < 0) {
                    b10 = i5;
                }
                height = (aVar.b(height) - b10) - i15;
            }
        } else {
            height = (height - this.f16260b) - this.f16261c;
        }
        ViewGroup.LayoutParams layoutParams = fVar.getLayoutParams();
        if (layoutParams == null) {
            layoutParams = new FrameLayout.LayoutParams(-1, i6);
        }
        if (layoutParams.width == -1 && layoutParams.height == i6) {
            return;
        }
        layoutParams.width = -1;
        layoutParams.height = i6;
        fVar.setLayoutParams(layoutParams);
    }

    public String toString() {
        switch (this.a) {
            case 0:
                int i5 = this.f16262d;
                String str = "";
                for (int i6 = 0; i5 != -1 && i6 < this.f16260b; i6++) {
                    StringBuilder o6 = k0.d.o(k0.d.k(str, " -> "));
                    o6.append(((float[]) this.k)[i5]);
                    o6.append(" : ");
                    StringBuilder o7 = k0.d.o(o6.toString());
                    o7.append(((e[]) ((r) this.f16266h).f13144v)[((int[]) this.f16267i)[i5]]);
                    str = o7.toString();
                    i5 = ((int[]) this.j)[i5];
                }
                return str;
            default:
                return super.toString();
        }
    }

    public a(b bVar, r rVar) {
        this.a = 0;
        this.f16260b = 0;
        this.f16261c = 8;
        this.f16267i = new int[8];
        this.j = new int[8];
        this.k = new float[8];
        this.f16262d = -1;
        this.f16264f = -1;
        this.f16263e = false;
        this.f16265g = bVar;
        this.f16266h = rVar;
    }
}
