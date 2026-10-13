package xn;

import a3.e;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.net.Uri;
import android.os.AsyncTask;
import android.util.Log;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.yalantis.ucrop.UCropActivity;
import et.y;
import java.io.Closeable;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;
import okio.BufferedSource;
import qd.f;
import un.c;

/* loaded from: classes3.dex */
public final class b extends AsyncTask {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public Uri f20528b;

    /* renamed from: c, reason: collision with root package name */
    public final Uri f20529c;

    /* renamed from: d, reason: collision with root package name */
    public final int f20530d;

    /* renamed from: e, reason: collision with root package name */
    public final int f20531e;

    /* renamed from: f, reason: collision with root package name */
    public final f f20532f;

    public b(Context context, Uri uri, Uri uri2, int i5, int i6, f fVar) {
        this.a = context;
        this.f20528b = uri;
        this.f20529c = uri2;
        this.f20530d = i5;
        this.f20531e = i6;
        this.f20532f = fVar;
    }

    public final void a(Uri uri, Uri uri2) {
        InputStream inputStream;
        Uri uri3 = this.f20529c;
        Context context = this.a;
        Log.d("BitmapWorkerTask", "copyFile");
        if (uri2 == null) {
            throw new NullPointerException("Output Uri is null - cannot copy image");
        }
        try {
            inputStream = context.getContentResolver().openInputStream(uri);
            try {
                if (inputStream == null) {
                    throw new NullPointerException("InputStream for given input Uri is null");
                }
                OutputStream openOutputStream = uri2.getScheme().equals("content") ? context.getContentResolver().openOutputStream(uri2) : new FileOutputStream(new File(uri2.getPath()));
                byte[] bArr = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
                while (true) {
                    int read = inputStream.read(bArr);
                    if (read <= 0) {
                        io.sentry.config.a.i(openOutputStream);
                        io.sentry.config.a.i(inputStream);
                        this.f20528b = uri3;
                        return;
                    }
                    openOutputStream.write(bArr, 0, read);
                }
            } catch (Throwable th2) {
                th = th2;
                io.sentry.config.a.i(null);
                io.sentry.config.a.i(inputStream);
                this.f20528b = uri3;
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
            inputStream = null;
        }
    }

    public final void b(Uri uri, Uri uri2) {
        Closeable closeable;
        Response response;
        Uri uri3 = this.f20529c;
        Log.d("BitmapWorkerTask", "downloadFile");
        if (uri2 == null) {
            throw new NullPointerException("Output Uri is null - cannot download image");
        }
        c cVar = c.f18964c;
        if (((OkHttpClient) cVar.f18965b) == null) {
            cVar.f18965b = new OkHttpClient();
        }
        OkHttpClient okHttpClient = (OkHttpClient) cVar.f18965b;
        BufferedSource bufferedSource = null;
        try {
            Request.Builder builder = new Request.Builder();
            builder.i(uri.toString());
            Response e9 = okHttpClient.a(builder.b()).e();
            try {
                ResponseBody responseBody = e9.f16091y;
                BufferedSource source = responseBody.source();
                try {
                    OutputStream openOutputStream = uri3.getScheme().equals("content") ? this.a.getContentResolver().openOutputStream(uri2) : new FileOutputStream(new File(uri2.getPath()));
                    if (openOutputStream == null) {
                        throw new NullPointerException("OutputStream for given output Uri is null");
                    }
                    et.b i5 = y.i(openOutputStream);
                    source.c0(i5);
                    io.sentry.config.a.i(source);
                    io.sentry.config.a.i(i5);
                    io.sentry.config.a.i(responseBody);
                    okHttpClient.f16046d.a();
                    this.f20528b = uri3;
                } catch (Throwable th2) {
                    th = th2;
                    response = e9;
                    closeable = null;
                    bufferedSource = source;
                    io.sentry.config.a.i(bufferedSource);
                    io.sentry.config.a.i(closeable);
                    if (response != null) {
                        io.sentry.config.a.i(response.f16091y);
                    }
                    okHttpClient.f16046d.a();
                    this.f20528b = uri3;
                    throw th;
                }
            } catch (Throwable th3) {
                th = th3;
                response = e9;
                closeable = null;
            }
        } catch (Throwable th4) {
            th = th4;
            closeable = null;
            response = null;
        }
    }

    public final void c() {
        Log.d("BitmapWorkerTask", "Uri scheme: " + this.f20528b.getScheme());
        String scheme = this.f20528b.getScheme();
        boolean equals = scheme.equals("http");
        Uri uri = this.f20529c;
        if (equals || scheme.equals("https")) {
            try {
                b(this.f20528b, uri);
                return;
            } catch (IOException | NullPointerException e9) {
                Log.e("BitmapWorkerTask", "Downloading failed", e9);
                throw e9;
            }
        }
        if (this.f20528b.getScheme().equals("content")) {
            try {
                a(this.f20528b, uri);
                return;
            } catch (IOException | NullPointerException e10) {
                Log.e("BitmapWorkerTask", "Copying failed", e10);
                throw e10;
            }
        }
        if (this.f20528b.getScheme().equals("file")) {
            return;
        }
        String scheme2 = this.f20528b.getScheme();
        Log.e("BitmapWorkerTask", "Invalid Uri scheme " + scheme2);
        throw new IllegalArgumentException(e.k("Invalid Uri scheme", scheme2));
    }

    /* JADX WARN: Removed duplicated region for block: B:63:0x013a  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x0162  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x0168  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0174  */
    /* JADX WARN: Removed duplicated region for block: B:89:0x0198  */
    /* JADX WARN: Removed duplicated region for block: B:91:0x013c  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x013f  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0142  */
    @Override // android.os.AsyncTask
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object doInBackground(Object[] objArr) {
        a aVar;
        int i5;
        int i6;
        int i10;
        Matrix matrix;
        InputStream openInputStream;
        int i11;
        if (this.f20528b == null) {
            return new a(new NullPointerException("Input Uri cannot be null"));
        }
        try {
            c();
            BitmapFactory.Options options = new BitmapFactory.Options();
            options.inJustDecodeBounds = true;
            int i12 = options.outHeight;
            int i13 = options.outWidth;
            int i14 = this.f20530d;
            int i15 = this.f20531e;
            if (i12 > i15 || i13 > i14) {
                i5 = 1;
                while (true) {
                    if (i12 / i5 <= i15 && i13 / i5 <= i14) {
                        break;
                    }
                    i5 *= 2;
                }
            } else {
                i5 = 1;
            }
            options.inSampleSize = i5;
            int i16 = 0;
            options.inJustDecodeBounds = false;
            boolean z5 = false;
            Bitmap bitmap = null;
            while (true) {
                Context context = this.a;
                int i17 = -1;
                if (z5) {
                    if (bitmap == null) {
                        return new a(new IllegalArgumentException("Bitmap could not be decoded from the Uri: [" + this.f20528b + "]"));
                    }
                    Uri uri = this.f20528b;
                    try {
                        openInputStream = context.getContentResolver().openInputStream(uri);
                        if (openInputStream == null) {
                            i6 = 0;
                        } else {
                            i6 = new yn.b(openInputStream).a();
                            try {
                            } catch (IOException e9) {
                                e = e9;
                                Log.e("BitmapLoadUtils", "getExifOrientation: " + uri.toString(), e);
                                switch (i6) {
                                }
                                if (i6 != 2) {
                                    i17 = 1;
                                }
                                wn.c cVar = new wn.c();
                                cVar.a = i6;
                                cVar.f19969b = i10;
                                cVar.f19970c = i17;
                                matrix = new Matrix();
                                if (i10 != 0) {
                                }
                                if (i17 != 1) {
                                }
                                if (!matrix.isIdentity()) {
                                }
                            }
                        }
                    } catch (IOException e10) {
                        e = e10;
                        i6 = 0;
                    }
                    switch (i6) {
                        case 3:
                        case 4:
                            i10 = 180;
                            break;
                        case 5:
                        case 6:
                            i10 = 90;
                            break;
                        case 7:
                        case 8:
                            i10 = 270;
                            break;
                        default:
                            i10 = 0;
                            break;
                    }
                    if (i6 != 2 && i6 != 7 && i6 != 4 && i6 != 5) {
                        i17 = 1;
                    }
                    wn.c cVar2 = new wn.c();
                    cVar2.a = i6;
                    cVar2.f19969b = i10;
                    cVar2.f19970c = i17;
                    matrix = new Matrix();
                    if (i10 != 0) {
                        matrix.preRotate(i10);
                    }
                    if (i17 != 1) {
                        matrix.postScale(i17, 1.0f);
                    }
                    if (!matrix.isIdentity()) {
                        return new a(bitmap, cVar2);
                    }
                    try {
                        Bitmap createBitmap = Bitmap.createBitmap(bitmap, 0, 0, bitmap.getWidth(), bitmap.getHeight(), matrix, true);
                        if (!bitmap.sameAs(createBitmap)) {
                            bitmap = createBitmap;
                        }
                    } catch (OutOfMemoryError e11) {
                        Log.e("BitmapLoadUtils", "transformBitmap: ", e11);
                    }
                    return new a(bitmap, cVar2);
                }
                try {
                    openInputStream = context.getContentResolver().openInputStream(this.f20528b);
                    try {
                        bitmap = BitmapFactory.decodeStream(openInputStream, null, options);
                    } finally {
                        io.sentry.config.a.i(openInputStream);
                    }
                } catch (IOException e12) {
                    Log.e("BitmapWorkerTask", "doInBackground: ImageDecoder.createSource: ", e12);
                    aVar = new a(new IllegalArgumentException("Bitmap could not be decoded from the Uri: [" + this.f20528b + "]", e12));
                    return aVar;
                } catch (OutOfMemoryError e13) {
                    Log.e("BitmapWorkerTask", "doInBackground: BitmapFactory.decodeFileDescriptor: ", e13);
                    options.inSampleSize *= 2;
                    i16 = 0;
                }
                if (options.outWidth == -1 || options.outHeight == -1) {
                    break;
                }
                if ((bitmap != null ? bitmap.getByteCount() : i16) > 104857600) {
                    options.inSampleSize *= 2;
                    i11 = 1;
                } else {
                    i11 = i16;
                }
                if (i11 == 0) {
                    z5 = true;
                }
            }
            a aVar2 = new a(new IllegalArgumentException("Bounds for bitmap could not be retrieved from the Uri: [" + this.f20528b + "]"));
            io.sentry.config.a.i(openInputStream);
            return aVar2;
        } catch (IOException | NullPointerException e14) {
            aVar = new a(e14);
        }
    }

    @Override // android.os.AsyncTask
    public final void onPostExecute(Object obj) {
        a aVar = (a) obj;
        Exception exc = aVar.f20527c;
        f fVar = this.f20532f;
        if (exc != null) {
            fVar.getClass();
            Log.e("TransformImageView", "onFailure: setImageUri", exc);
            zn.e eVar = ((zn.f) fVar.f16831e).f21322y;
            if (eVar != null) {
                UCropActivity uCropActivity = (UCropActivity) ((c) eVar).f18965b;
                uCropActivity.f(exc);
                uCropActivity.finish();
                return;
            }
            return;
        }
        Bitmap bitmap = aVar.a;
        wn.c cVar = aVar.f20526b;
        String path = this.f20528b.getPath();
        Uri uri = this.f20529c;
        String path2 = uri == null ? null : uri.getPath();
        zn.f fVar2 = (zn.f) fVar.f16831e;
        fVar2.J = path;
        fVar2.K = path2;
        fVar2.L = cVar;
        fVar2.G = true;
        fVar2.setImageBitmap(bitmap);
    }
}
