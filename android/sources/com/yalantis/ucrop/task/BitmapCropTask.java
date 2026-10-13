package com.yalantis.ucrop.task;

import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.RectF;
import android.net.Uri;
import android.os.AsyncTask;
import android.text.TextUtils;
import android.util.Log;
import com.yalantis.ucrop.UCropActivity;
import io.sentry.android.core.internal.gestures.e;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.channels.FileChannel;
import n2.h;
import wn.b;
import wn.c;

/* loaded from: classes3.dex */
public class BitmapCropTask extends AsyncTask<Void, Void, Throwable> {
    public Bitmap a;

    /* renamed from: b, reason: collision with root package name */
    public final RectF f6828b;

    /* renamed from: c, reason: collision with root package name */
    public final RectF f6829c;

    /* renamed from: d, reason: collision with root package name */
    public float f6830d;

    /* renamed from: e, reason: collision with root package name */
    public final float f6831e;

    /* renamed from: f, reason: collision with root package name */
    public final int f6832f;

    /* renamed from: g, reason: collision with root package name */
    public final int f6833g;

    /* renamed from: h, reason: collision with root package name */
    public final Bitmap.CompressFormat f6834h;

    /* renamed from: i, reason: collision with root package name */
    public final int f6835i;
    public final String j;
    public final String k;

    /* renamed from: l, reason: collision with root package name */
    public final c f6836l;

    /* renamed from: m, reason: collision with root package name */
    public final un.c f6837m;

    /* renamed from: n, reason: collision with root package name */
    public int f6838n;

    /* renamed from: o, reason: collision with root package name */
    public int f6839o;

    /* renamed from: p, reason: collision with root package name */
    public int f6840p;

    /* renamed from: q, reason: collision with root package name */
    public int f6841q;

    static {
        System.loadLibrary("ucrop");
    }

    public BitmapCropTask(Bitmap bitmap, e eVar, b bVar, un.c cVar) {
        this.a = bitmap;
        this.f6828b = (RectF) eVar.f11170c;
        this.f6829c = (RectF) eVar.f11171d;
        this.f6830d = eVar.a;
        this.f6831e = eVar.f11169b;
        this.f6832f = bVar.a;
        this.f6833g = bVar.f19963b;
        this.f6834h = (Bitmap.CompressFormat) bVar.f19966e;
        this.f6835i = bVar.f19964c;
        this.j = bVar.f19965d;
        this.k = (String) bVar.f19967f;
        this.f6836l = (c) bVar.f19968g;
        this.f6837m = cVar;
    }

    public static native boolean cropCImg(String str, String str2, int i5, int i6, int i10, int i11, float f2, float f10, int i12, int i13, int i14, int i15);

    public final void a(float f2) {
        FileChannel fileChannel;
        String str = this.j;
        h hVar = new h(str);
        RectF rectF = this.f6828b;
        float f10 = rectF.left;
        RectF rectF2 = this.f6829c;
        this.f6840p = Math.round((f10 - rectF2.left) / this.f6830d);
        this.f6841q = Math.round((rectF.top - rectF2.top) / this.f6830d);
        this.f6838n = Math.round(rectF.width() / this.f6830d);
        this.f6839o = Math.round(rectF.height() / this.f6830d);
        boolean z5 = true;
        int round = Math.round(Math.max(this.f6838n, r4) / 1000.0f) + 1;
        if (this.f6832f <= 0 || this.f6833g <= 0) {
            float f11 = round;
            if (Math.abs(rectF.left - rectF2.left) <= f11 && Math.abs(rectF.top - rectF2.top) <= f11 && Math.abs(rectF.bottom - rectF2.bottom) <= f11 && Math.abs(rectF.right - rectF2.right) <= f11 && this.f6831e == 0.0f) {
                z5 = false;
            }
        }
        Log.i("BitmapCropTask", "Should crop: " + z5);
        String str2 = this.k;
        if (z5) {
            int i5 = this.f6840p;
            int i6 = this.f6841q;
            int i10 = this.f6838n;
            int i11 = this.f6839o;
            Bitmap.CompressFormat compressFormat = this.f6834h;
            int ordinal = compressFormat.ordinal();
            c cVar = this.f6836l;
            if (cropCImg(this.j, this.k, i5, i6, i10, i11, this.f6831e, f2, ordinal, this.f6835i, cVar.f19969b, cVar.f19970c) && compressFormat.equals(Bitmap.CompressFormat.JPEG)) {
                int i12 = this.f6838n;
                int i13 = this.f6839o;
                byte[] bArr = yn.b.f20981b;
                String[] strArr = {"FNumber", "DateTime", "DateTimeDigitized", "ExposureTime", "Flash", "FocalLength", "GPSAltitude", "GPSAltitudeRef", "GPSDateStamp", "GPSLatitude", "GPSLatitudeRef", "GPSLongitude", "GPSLongitudeRef", "GPSProcessingMethod", "GPSTimeStamp", "PhotographicSensitivity", "Make", "Model", "SubSecTime", "SubSecTimeDigitized", "SubSecTimeOriginal", "WhiteBalance"};
                try {
                    h hVar2 = new h(str2);
                    for (int i14 = 0; i14 < 22; i14++) {
                        String str3 = strArr[i14];
                        String b10 = hVar.b(str3);
                        if (!TextUtils.isEmpty(b10)) {
                            hVar2.F(str3, b10);
                        }
                    }
                    hVar2.F("ImageWidth", String.valueOf(i12));
                    hVar2.F("ImageLength", String.valueOf(i13));
                    hVar2.F("Orientation", "0");
                    hVar2.B();
                    return;
                } catch (IOException e9) {
                    Log.d("ImageHeaderParser", e9.getMessage());
                    return;
                }
            }
            return;
        }
        if (str.equalsIgnoreCase(str2)) {
            return;
        }
        FileChannel fileChannel2 = null;
        try {
            FileChannel channel = new FileInputStream(new File(str)).getChannel();
            try {
                fileChannel = new FileOutputStream(new File(str2)).getChannel();
                try {
                    channel.transferTo(0L, channel.size(), fileChannel);
                    channel.close();
                    channel.close();
                    if (fileChannel != null) {
                        fileChannel.close();
                    }
                } catch (Throwable th2) {
                    th = th2;
                    fileChannel2 = channel;
                    if (fileChannel2 != null) {
                        fileChannel2.close();
                    }
                    if (fileChannel != null) {
                        fileChannel.close();
                    }
                    throw th;
                }
            } catch (Throwable th3) {
                th = th3;
                fileChannel = null;
            }
        } catch (Throwable th4) {
            th = th4;
            fileChannel = null;
        }
    }

    @Override // android.os.AsyncTask
    public final Throwable doInBackground(Void[] voidArr) {
        float f2;
        int i5;
        Bitmap bitmap = this.a;
        if (bitmap == null) {
            return new NullPointerException("ViewBitmap is null");
        }
        if (bitmap.isRecycled()) {
            return new NullPointerException("ViewBitmap is recycled");
        }
        if (this.f6829c.isEmpty()) {
            return new NullPointerException("CurrentImageRect is empty");
        }
        BitmapFactory.Options options = new BitmapFactory.Options();
        boolean z5 = true;
        options.inJustDecodeBounds = true;
        BitmapFactory.decodeFile(this.j, options);
        int i6 = this.f6836l.f19969b;
        if (i6 != 90 && i6 != 270) {
            z5 = false;
        }
        this.f6830d /= Math.min((z5 ? options.outHeight : options.outWidth) / this.a.getWidth(), (z5 ? options.outWidth : options.outHeight) / this.a.getHeight());
        int i10 = this.f6832f;
        try {
            if (i10 > 0 && (i5 = this.f6833g) > 0) {
                RectF rectF = this.f6828b;
                float width = rectF.width() / this.f6830d;
                float height = rectF.height() / this.f6830d;
                float f10 = i10;
                if (width > f10 || height > i5) {
                    f2 = Math.min(f10 / width, i5 / height);
                    this.f6830d /= f2;
                    a(f2);
                    this.a = null;
                    return null;
                }
            }
            a(f2);
            this.a = null;
            return null;
        } catch (Throwable th2) {
            return th2;
        }
        f2 = 1.0f;
    }

    @Override // android.os.AsyncTask
    public final void onPostExecute(Throwable th2) {
        Throwable th3 = th2;
        un.c cVar = this.f6837m;
        if (cVar != null) {
            UCropActivity uCropActivity = (UCropActivity) cVar.f18965b;
            if (th3 != null) {
                uCropActivity.f(th3);
                uCropActivity.finish();
                return;
            }
            Uri fromFile = Uri.fromFile(new File(this.k));
            int i5 = this.f6840p;
            int i6 = this.f6841q;
            int i10 = this.f6838n;
            uCropActivity.setResult(-1, new Intent().putExtra("com.yalantis.ucrop.OutputUri", fromFile).putExtra("com.yalantis.ucrop.CropAspectRatio", uCropActivity.J.getTargetAspectRatio()).putExtra("com.yalantis.ucrop.ImageWidth", i10).putExtra("com.yalantis.ucrop.ImageHeight", this.f6839o).putExtra("com.yalantis.ucrop.OffsetX", i5).putExtra("com.yalantis.ucrop.OffsetY", i6));
            uCropActivity.finish();
        }
    }
}
