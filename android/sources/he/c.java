package he;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Rect;
import android.text.Layout;
import android.text.SpannableStringBuilder;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.text.TextUtils;
import android.text.style.AbsoluteSizeSpan;
import android.text.style.BackgroundColorSpan;
import android.text.style.ForegroundColorSpan;
import android.view.View;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public final class c extends View implements p {

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f9962d;

    /* renamed from: e, reason: collision with root package name */
    public List f9963e;

    /* renamed from: i, reason: collision with root package name */
    public float f9964i;

    /* renamed from: v, reason: collision with root package name */
    public d f9965v;

    /* renamed from: w, reason: collision with root package name */
    public float f9966w;

    public c(Context context, int i5) {
        super(context, null);
        this.f9962d = new ArrayList();
        this.f9963e = Collections.EMPTY_LIST;
        this.f9964i = 0.0533f;
        this.f9965v = d.f9967g;
        this.f9966w = 0.08f;
    }

    @Override // he.p
    public final void a(List list, d dVar, float f2, float f10) {
        this.f9963e = list;
        this.f9965v = dVar;
        this.f9964i = f2;
        this.f9966w = f10;
        while (true) {
            ArrayList arrayList = this.f9962d;
            if (arrayList.size() >= list.size()) {
                invalidate();
                return;
            }
            arrayList.add(new o(getContext()));
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:131:0x0464  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x0467  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void dispatchDraw(Canvas canvas) {
        List list;
        float f2;
        int i5;
        int i6;
        int i10;
        int i11;
        boolean z5;
        float f10;
        int i12;
        float f11;
        TextPaint textPaint;
        int i13;
        int i14;
        int i15;
        int i16;
        int i17;
        c cVar = this;
        List list2 = cVar.f9963e;
        if (list2.isEmpty()) {
            return;
        }
        int height = cVar.getHeight();
        int paddingLeft = cVar.getPaddingLeft();
        int paddingTop = cVar.getPaddingTop();
        int width = cVar.getWidth() - cVar.getPaddingRight();
        int paddingBottom = height - cVar.getPaddingBottom();
        if (paddingBottom <= paddingTop || width <= paddingLeft) {
            return;
        }
        int i18 = paddingBottom - paddingTop;
        float F = jb.a.F(0, height, i18, cVar.f9964i);
        float f12 = 0.0f;
        if (F <= 0.0f) {
            return;
        }
        int size = list2.size();
        int i19 = 0;
        while (i19 < size) {
            wd.b bVar = (wd.b) list2.get(i19);
            float f13 = f12;
            if (bVar.M != Integer.MIN_VALUE) {
                wd.a a = bVar.a();
                float f14 = bVar.f19806w;
                list = list2;
                a.f19788h = -3.4028235E38f;
                a.f19789i = Integer.MIN_VALUE;
                a.f19783c = null;
                if (bVar.f19807x == 0) {
                    a.f19785e = 1.0f - f14;
                    i17 = 0;
                    a.f19786f = 0;
                } else {
                    i17 = 0;
                    a.f19785e = (-f14) - 1.0f;
                    a.f19786f = 1;
                }
                int i20 = bVar.f19808y;
                if (i20 == 0) {
                    a.f19787g = 2;
                } else if (i20 == 2) {
                    a.f19787g = i17;
                }
                bVar = a.a();
            } else {
                list = list2;
            }
            float F2 = jb.a.F(bVar.K, height, i18, bVar.L);
            o oVar = (o) cVar.f9962d.get(i19);
            d dVar = cVar.f9965v;
            float f15 = cVar.f9966w;
            TextPaint textPaint2 = oVar.f9992f;
            int i21 = height;
            Bitmap bitmap = bVar.f19805v;
            int i22 = i18;
            float f16 = bVar.H;
            int i23 = size;
            float f17 = bVar.G;
            int i24 = i19;
            int i25 = bVar.F;
            float f18 = bVar.E;
            int i26 = bVar.f19808y;
            float f19 = F;
            int i27 = bVar.f19807x;
            float f20 = bVar.f19806w;
            Layout.Alignment alignment = bVar.f19803e;
            CharSequence charSequence = bVar.f19802d;
            boolean z6 = bitmap == null;
            if (z6) {
                if (!TextUtils.isEmpty(charSequence)) {
                    f2 = f18;
                    i5 = bVar.I ? bVar.J : dVar.f9969c;
                }
                i10 = paddingLeft;
                i11 = paddingTop;
                z5 = false;
                i19 = i24 + 1;
                cVar = this;
                f12 = f13;
                list2 = list;
                height = i21;
                i18 = i22;
                size = i23;
                F = f19;
                paddingLeft = i10;
                paddingTop = i11;
            } else {
                f2 = f18;
                i5 = -16777216;
            }
            CharSequence charSequence2 = oVar.f9995i;
            if ((charSequence2 == charSequence || (charSequence2 != null && charSequence2.equals(charSequence))) && d0.a(oVar.j, alignment) && oVar.k == bitmap && oVar.f9996l == f20 && oVar.f9997m == i27) {
                i6 = i26;
                if (Integer.valueOf(oVar.f9998n).equals(Integer.valueOf(i6)) && oVar.f9999o == f2 && Integer.valueOf(oVar.f10000p).equals(Integer.valueOf(i25)) && oVar.f10001q == f17 && oVar.f10002r == f16 && oVar.f10003s == dVar.a && oVar.f10004t == dVar.f9968b && oVar.f10005u == i5 && oVar.f10007w == dVar.f9970d && oVar.f10006v == dVar.f9971e && d0.a(textPaint2.getTypeface(), dVar.f9972f) && oVar.f10008x == f19 && oVar.f10009y == F2 && oVar.f10010z == f15 && oVar.A == paddingLeft && oVar.B == paddingTop && oVar.C == width && oVar.D == paddingBottom) {
                    oVar.a(canvas, z6);
                    i10 = paddingLeft;
                    i11 = paddingTop;
                    z5 = false;
                    i19 = i24 + 1;
                    cVar = this;
                    f12 = f13;
                    list2 = list;
                    height = i21;
                    i18 = i22;
                    size = i23;
                    F = f19;
                    paddingLeft = i10;
                    paddingTop = i11;
                }
            } else {
                i6 = i26;
            }
            oVar.f9995i = charSequence;
            oVar.j = alignment;
            oVar.k = bitmap;
            oVar.f9996l = f20;
            oVar.f9997m = i27;
            oVar.f9998n = i6;
            oVar.f9999o = f2;
            oVar.f10000p = i25;
            oVar.f10001q = f17;
            oVar.f10002r = f16;
            oVar.f10003s = dVar.a;
            oVar.f10004t = dVar.f9968b;
            oVar.f10005u = i5;
            oVar.f10007w = dVar.f9970d;
            oVar.f10006v = dVar.f9971e;
            textPaint2.setTypeface(dVar.f9972f);
            oVar.f10008x = f19;
            oVar.f10009y = F2;
            oVar.f10010z = f15;
            oVar.A = paddingLeft;
            oVar.B = paddingTop;
            oVar.C = width;
            oVar.D = paddingBottom;
            if (z6) {
                oVar.f9995i.getClass();
                CharSequence charSequence3 = oVar.f9995i;
                SpannableStringBuilder spannableStringBuilder = charSequence3 instanceof SpannableStringBuilder ? (SpannableStringBuilder) charSequence3 : new SpannableStringBuilder(oVar.f9995i);
                int i28 = oVar.C - oVar.A;
                int i29 = oVar.D - oVar.B;
                textPaint2.setTextSize(oVar.f10008x);
                int i30 = (int) ((oVar.f10008x * 0.125f) + 0.5f);
                int i31 = i30 * 2;
                int i32 = i28 - i31;
                float f21 = oVar.f10001q;
                if (f21 != -3.4028235E38f) {
                    i32 = (int) (i32 * f21);
                }
                int i33 = i32;
                if (i33 <= 0) {
                    ke.b.N("SubtitlePainter", "Skipped drawing subtitle cue (insufficient space)");
                    f19 = f19;
                    i10 = paddingLeft;
                    i11 = paddingTop;
                } else {
                    f19 = f19;
                    if (oVar.f10009y > f13) {
                        textPaint = textPaint2;
                        i10 = paddingLeft;
                        i13 = 0;
                        spannableStringBuilder.setSpan(new AbsoluteSizeSpan((int) oVar.f10009y), 0, spannableStringBuilder.length(), 16711680);
                    } else {
                        textPaint = textPaint2;
                        i10 = paddingLeft;
                        i13 = 0;
                    }
                    SpannableStringBuilder spannableStringBuilder2 = new SpannableStringBuilder(spannableStringBuilder);
                    if (oVar.f10007w == 1) {
                        ForegroundColorSpan[] foregroundColorSpanArr = (ForegroundColorSpan[]) spannableStringBuilder2.getSpans(i13, spannableStringBuilder2.length(), ForegroundColorSpan.class);
                        int i34 = 0;
                        for (int length = foregroundColorSpanArr.length; i34 < length; length = length) {
                            spannableStringBuilder2.removeSpan(foregroundColorSpanArr[i34]);
                            i34++;
                        }
                    }
                    if (Color.alpha(oVar.f10004t) > 0) {
                        int i35 = oVar.f10007w;
                        if (i35 == 0 || i35 == 2) {
                            i11 = paddingTop;
                            spannableStringBuilder.setSpan(new BackgroundColorSpan(oVar.f10004t), 0, spannableStringBuilder.length(), 16711680);
                        } else {
                            i11 = paddingTop;
                            spannableStringBuilder2.setSpan(new BackgroundColorSpan(oVar.f10004t), 0, spannableStringBuilder2.length(), 16711680);
                        }
                    } else {
                        i11 = paddingTop;
                    }
                    Layout.Alignment alignment2 = oVar.j;
                    if (alignment2 == null) {
                        alignment2 = Layout.Alignment.ALIGN_CENTER;
                    }
                    Layout.Alignment alignment3 = alignment2;
                    SpannableStringBuilder spannableStringBuilder3 = spannableStringBuilder;
                    StaticLayout staticLayout = new StaticLayout(spannableStringBuilder3, textPaint, i33, alignment3, oVar.f9990d, oVar.f9991e, true);
                    oVar.E = staticLayout;
                    int height2 = staticLayout.getHeight();
                    int lineCount = oVar.E.getLineCount();
                    int i36 = 0;
                    int i37 = 0;
                    while (i36 < lineCount) {
                        i37 = Math.max((int) Math.ceil(oVar.E.getLineWidth(i36)), i37);
                        i36++;
                        height2 = height2;
                        lineCount = lineCount;
                        spannableStringBuilder2 = spannableStringBuilder2;
                    }
                    SpannableStringBuilder spannableStringBuilder4 = spannableStringBuilder2;
                    int i38 = height2;
                    int i39 = ((oVar.f10001q == -3.4028235E38f || i37 >= i33) ? i37 : i33) + i31;
                    float f22 = oVar.f9999o;
                    if (f22 != -3.4028235E38f) {
                        int round = Math.round(i28 * f22);
                        int i40 = oVar.A;
                        int i41 = round + i40;
                        int i42 = oVar.f10000p;
                        if (i42 == 1) {
                            i41 = ((i41 * 2) - i39) / 2;
                        } else if (i42 == 2) {
                            i41 -= i39;
                        }
                        i14 = Math.max(i41, i40);
                        i15 = Math.min(i14 + i39, oVar.C);
                    } else {
                        i14 = oVar.A + ((i28 - i39) / 2);
                        i15 = i14 + i39;
                    }
                    int i43 = i15 - i14;
                    if (i43 <= 0) {
                        ke.b.N("SubtitlePainter", "Skipped drawing subtitle cue (invalid horizontal positioning)");
                    } else {
                        float f23 = oVar.f9996l;
                        if (f23 != -3.4028235E38f) {
                            if (oVar.f9997m == 0) {
                                i16 = Math.round(i29 * f23) + oVar.B;
                                int i44 = oVar.f9998n;
                                if (i44 == 2) {
                                    i16 -= i38;
                                } else if (i44 == 1) {
                                    i16 = ((i16 * 2) - i38) / 2;
                                }
                                z5 = false;
                            } else {
                                z5 = false;
                                int lineBottom = oVar.E.getLineBottom(0) - oVar.E.getLineTop(0);
                                float f24 = oVar.f9996l;
                                i16 = f24 >= f13 ? Math.round(f24 * lineBottom) + oVar.B : (Math.round((f24 + 1.0f) * lineBottom) + oVar.D) - i38;
                            }
                            int i45 = i16 + i38;
                            int i46 = oVar.D;
                            if (i45 > i46) {
                                i16 = i46 - i38;
                            } else {
                                int i47 = oVar.B;
                                if (i16 < i47) {
                                    i16 = i47;
                                }
                            }
                        } else {
                            z5 = false;
                            i16 = (oVar.D - i38) - ((int) (i29 * oVar.f10010z));
                        }
                        oVar.E = new StaticLayout(spannableStringBuilder3, textPaint, i43, alignment3, oVar.f9990d, oVar.f9991e, true);
                        oVar.F = new StaticLayout(spannableStringBuilder4, textPaint, i43, alignment3, oVar.f9990d, oVar.f9991e, true);
                        oVar.G = i14;
                        oVar.H = i16;
                        oVar.I = i30;
                    }
                }
                z5 = false;
            } else {
                f19 = f19;
                i10 = paddingLeft;
                i11 = paddingTop;
                z5 = false;
                oVar.k.getClass();
                Bitmap bitmap2 = oVar.k;
                int i48 = oVar.C;
                int i49 = oVar.A;
                int i50 = oVar.D;
                int i51 = oVar.B;
                float f25 = i48 - i49;
                float f26 = (oVar.f9999o * f25) + i49;
                float f27 = i50 - i51;
                float f28 = (oVar.f9996l * f27) + i51;
                int round2 = Math.round(f25 * oVar.f10001q);
                float f29 = oVar.f10002r;
                int round3 = f29 != -3.4028235E38f ? Math.round(f27 * f29) : Math.round((bitmap2.getHeight() / bitmap2.getWidth()) * round2);
                int i52 = oVar.f10000p;
                if (i52 == 2) {
                    f10 = round2;
                } else {
                    if (i52 == 1) {
                        f10 = round2 / 2;
                    }
                    int round4 = Math.round(f26);
                    i12 = oVar.f9998n;
                    if (i12 != 2) {
                        f11 = round3;
                    } else {
                        if (i12 == 1) {
                            f11 = round3 / 2;
                        }
                        int round5 = Math.round(f28);
                        oVar.J = new Rect(round4, round5, round2 + round4, round3 + round5);
                    }
                    f28 -= f11;
                    int round52 = Math.round(f28);
                    oVar.J = new Rect(round4, round52, round2 + round4, round3 + round52);
                }
                f26 -= f10;
                int round42 = Math.round(f26);
                i12 = oVar.f9998n;
                if (i12 != 2) {
                }
                f28 -= f11;
                int round522 = Math.round(f28);
                oVar.J = new Rect(round42, round522, round2 + round42, round3 + round522);
            }
            oVar.a(canvas, z6);
            i19 = i24 + 1;
            cVar = this;
            f12 = f13;
            list2 = list;
            height = i21;
            i18 = i22;
            size = i23;
            F = f19;
            paddingLeft = i10;
            paddingTop = i11;
        }
    }
}
