package t4;

import android.app.Application;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.Base64;
import java.io.IOException;
import java.util.HashMap;
import l4.v;
import l4.x;
import l4.z;
import o4.r;

/* loaded from: classes.dex */
public final class d extends b {
    public final /* synthetic */ int D;
    public final m4.a E;
    public r F;
    public r G;
    public final Parcelable H;
    public final Object I;
    public final Object J;
    public final Object K;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(v vVar, e eVar, int i5) {
        super(vVar, eVar);
        this.D = i5;
        switch (i5) {
            case 1:
                super(vVar, eVar);
                this.H = new RectF();
                m4.a aVar = new m4.a();
                this.E = aVar;
                this.I = new float[8];
                this.J = new Path();
                this.K = eVar;
                aVar.setAlpha(0);
                aVar.setStyle(Paint.Style.FILL);
                aVar.setColor(eVar.f18202l);
                break;
            default:
                this.E = new m4.a(3, 0);
                this.H = new Rect();
                this.I = new Rect();
                String str = eVar.f18199g;
                l4.i iVar = vVar.f13787d;
                this.J = iVar == null ? null : (x) ((HashMap) iVar.c()).get(str);
                am.f fVar = this.f18183p.f18214x;
                if (fVar != null) {
                    this.K = new o4.h(this, this, fVar);
                    break;
                }
                break;
        }
    }

    @Override // t4.b, q4.f
    public final void c(e4.e eVar, Object obj) {
        switch (this.D) {
            case 0:
                super.c(eVar, obj);
                if (obj != z.F) {
                    if (obj == z.I) {
                        this.G = new r(eVar, null);
                        break;
                    }
                } else {
                    this.F = new r(eVar, null);
                    break;
                }
                break;
            default:
                super.c(eVar, obj);
                if (obj != z.F) {
                    if (obj == 1) {
                        this.G = new r(eVar, null);
                        break;
                    }
                } else {
                    this.F = new r(eVar, null);
                    break;
                }
                break;
        }
    }

    @Override // t4.b, n4.e
    public final void e(RectF rectF, Matrix matrix, boolean z5) {
        switch (this.D) {
            case 0:
                super.e(rectF, matrix, z5);
                if (((x) this.J) != null) {
                    float c6 = x4.h.c();
                    rectF.set(0.0f, 0.0f, r4.a * c6, r4.f13807b * c6);
                    this.f18181n.mapRect(rectF);
                    break;
                }
                break;
            default:
                super.e(rectF, matrix, z5);
                RectF rectF2 = (RectF) this.H;
                e eVar = (e) this.K;
                rectF2.set(0.0f, 0.0f, eVar.j, eVar.k);
                this.f18181n.mapRect(rectF2);
                rectF.set(rectF2);
                break;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:52:0x00f4, code lost:
    
        if (r0 == null) goto L41;
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x0102, code lost:
    
        r6.f13804y = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x00ff, code lost:
    
        if (r13 == r0) goto L41;
     */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0219  */
    @Override // t4.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void k(Canvas canvas, Matrix matrix, int i5) {
        Bitmap bitmap;
        Bitmap bitmap2;
        Bitmap decodeStream;
        switch (this.D) {
            case 0:
                Rect rect = (Rect) this.H;
                v vVar = this.f18182o;
                Rect rect2 = (Rect) this.I;
                x xVar = (x) this.J;
                m4.a aVar = this.E;
                r rVar = this.G;
                if (rVar == null || (bitmap2 = (Bitmap) rVar.e()) == null) {
                    String str = this.f18183p.f18199g;
                    p4.a aVar2 = vVar.f13804y;
                    if (aVar2 != null) {
                        Context h6 = vVar.h();
                        Context context = aVar2.a;
                        if (h6 != null) {
                            if (context instanceof Application) {
                                h6 = h6.getApplicationContext();
                                break;
                            }
                        }
                    }
                    if (vVar.f13804y == null) {
                        vVar.f13804y = new p4.a(vVar.getCallback(), vVar.E, vVar.f13787d.c());
                    }
                    p4.a aVar3 = vVar.f13804y;
                    if (aVar3 != null) {
                        String str2 = aVar3.f16311b;
                        x xVar2 = (x) aVar3.f16312c.get(str);
                        if (xVar2 != null) {
                            int i6 = xVar2.f13807b;
                            int i10 = xVar2.a;
                            Bitmap bitmap3 = xVar2.f13811f;
                            if (bitmap3 != null) {
                                bitmap2 = bitmap3;
                            } else {
                                Context context2 = aVar3.a;
                                if (context2 != null) {
                                    String str3 = xVar2.f13809d;
                                    BitmapFactory.Options options = new BitmapFactory.Options();
                                    options.inScaled = true;
                                    options.inDensity = 160;
                                    if (!str3.startsWith("data:") || str3.indexOf("base64,") <= 0) {
                                        try {
                                        } catch (IOException e9) {
                                            e = e9;
                                            bitmap = null;
                                        }
                                        if (TextUtils.isEmpty(str2)) {
                                            bitmap = null;
                                            try {
                                                throw new IllegalStateException("You must set an images folder before loading an image. Set it with LottieComposition#setImagesFolder or LottieDrawable#setImagesFolder");
                                            } catch (IOException e10) {
                                                e = e10;
                                                x4.c.c("Unable to open asset.", e);
                                                bitmap2 = bitmap;
                                                if (bitmap2 == null) {
                                                }
                                                if (bitmap2 != null) {
                                                    return;
                                                } else {
                                                    return;
                                                }
                                            }
                                        }
                                        bitmap = null;
                                        try {
                                            decodeStream = BitmapFactory.decodeStream(context2.getAssets().open(str2 + str3), null, options);
                                        } catch (IllegalArgumentException e11) {
                                            x4.c.c("Unable to decode image `" + str + "`.", e11);
                                        }
                                        if (decodeStream == null) {
                                            x4.c.b("Decoded image `" + str + "` is null.");
                                            bitmap2 = bitmap;
                                            if (bitmap2 == null) {
                                                bitmap2 = xVar != null ? xVar.f13811f : bitmap;
                                            }
                                        } else {
                                            Bitmap d6 = x4.h.d(i10, i6, decodeStream);
                                            synchronized (p4.a.f16310d) {
                                                ((x) aVar3.f16312c.get(str)).f13811f = d6;
                                            }
                                            bitmap2 = d6;
                                            if (bitmap2 == null) {
                                            }
                                        }
                                    } else {
                                        try {
                                            byte[] decode = Base64.decode(str3.substring(str3.indexOf(44) + 1), 0);
                                            Bitmap d7 = x4.h.d(i10, i6, BitmapFactory.decodeByteArray(decode, 0, decode.length, options));
                                            synchronized (p4.a.f16310d) {
                                                ((x) aVar3.f16312c.get(str)).f13811f = d7;
                                            }
                                            bitmap2 = d7;
                                        } catch (IllegalArgumentException e12) {
                                            x4.c.c("data URL did not have correct base64 format.", e12);
                                        }
                                    }
                                }
                                bitmap = null;
                                bitmap2 = bitmap;
                                if (bitmap2 == null) {
                                }
                            }
                            bitmap = null;
                            if (bitmap2 == null) {
                            }
                        }
                    }
                    bitmap = null;
                    bitmap2 = bitmap;
                    if (bitmap2 == null) {
                    }
                }
                if (bitmap2 != null || bitmap2.isRecycled() || xVar == null) {
                    return;
                }
                float c6 = x4.h.c();
                aVar.setAlpha(i5);
                r rVar2 = this.F;
                if (rVar2 != null) {
                    aVar.setColorFilter((ColorFilter) rVar2.e());
                }
                canvas.save();
                canvas.concat(matrix);
                rect.set(0, 0, bitmap2.getWidth(), bitmap2.getHeight());
                if (vVar.L) {
                    rect2.set(0, 0, (int) (xVar.a * c6), (int) (xVar.f13807b * c6));
                } else {
                    rect2.set(0, 0, (int) (bitmap2.getWidth() * c6), (int) (bitmap2.getHeight() * c6));
                }
                o4.h hVar = (o4.h) this.K;
                if (hVar != null) {
                    hVar.b(aVar, matrix, i5);
                }
                canvas.drawBitmap(bitmap2, rect, rect2, aVar);
                canvas.restore();
                return;
            default:
                Paint paint = this.E;
                float[] fArr = (float[]) this.I;
                Path path = (Path) this.J;
                e eVar = (e) this.K;
                int alpha = Color.alpha(eVar.f18202l);
                if (alpha == 0) {
                    return;
                }
                r rVar3 = this.G;
                Integer num = rVar3 == null ? null : (Integer) rVar3.e();
                if (num != null) {
                    paint.setColor(num.intValue());
                } else {
                    paint.setColor(eVar.f18202l);
                }
                int intValue = (int) ((((alpha / 255.0f) * (this.f18190w.j == null ? 100 : ((Integer) r9.e()).intValue())) / 100.0f) * (i5 / 255.0f) * 255.0f);
                paint.setAlpha(intValue);
                r rVar4 = this.F;
                if (rVar4 != null) {
                    paint.setColorFilter((ColorFilter) rVar4.e());
                }
                if (intValue > 0) {
                    fArr[0] = 0.0f;
                    fArr[1] = 0.0f;
                    float f2 = eVar.j;
                    fArr[2] = f2;
                    fArr[3] = 0.0f;
                    fArr[4] = f2;
                    float f10 = eVar.k;
                    fArr[5] = f10;
                    fArr[6] = 0.0f;
                    fArr[7] = f10;
                    matrix.mapPoints(fArr);
                    path.reset();
                    path.moveTo(fArr[0], fArr[1]);
                    path.lineTo(fArr[2], fArr[3]);
                    path.lineTo(fArr[4], fArr[5]);
                    path.lineTo(fArr[6], fArr[7]);
                    path.lineTo(fArr[0], fArr[1]);
                    path.close();
                    canvas.drawPath(path, paint);
                    return;
                }
                return;
        }
    }
}
