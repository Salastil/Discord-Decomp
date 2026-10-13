package jl;

import android.app.Activity;
import android.content.ClipData;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.drawable.Drawable;
import android.media.MediaMetadataRetriever;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.util.Base64;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.MimeTypeMap;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.core.view.s0;
import com.discord.R;
import com.facebook.react.bridge.ActivityEventListener;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.modules.core.PermissionAwareActivity;
import com.google.android.material.datepicker.g;
import com.reactnativecommunity.clipboard.ClipboardModule;
import com.yalantis.ucrop.UCropActivity;
import e4.l;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.UUID;
import java.util.concurrent.Callable;
import n2.h;

/* loaded from: classes3.dex */
public final class e implements ActivityEventListener {

    /* renamed from: f0, reason: collision with root package name */
    public static a f12832f0;

    /* renamed from: g0, reason: collision with root package name */
    public static b f12833g0;
    public boolean E;
    public boolean F;
    public boolean G;
    public boolean H;
    public boolean I;
    public boolean J;
    public boolean K;
    public boolean L;
    public ReadableMap M;
    public String N;
    public String O;
    public String P;
    public String Q;
    public String R;
    public String S;
    public String T;
    public String U;
    public String V;
    public String W;
    public int X;
    public int Y;
    public int Z;
    public Uri a0;

    /* renamed from: b0, reason: collision with root package name */
    public String f12834b0;

    /* renamed from: c0, reason: collision with root package name */
    public f f12835c0;

    /* renamed from: d, reason: collision with root package name */
    public String f12836d;

    /* renamed from: d0, reason: collision with root package name */
    public lh.f f12837d0;

    /* renamed from: e, reason: collision with root package name */
    public boolean f12838e;

    /* renamed from: e0, reason: collision with root package name */
    public ReactApplicationContext f12839e0;

    /* renamed from: i, reason: collision with root package name */
    public boolean f12840i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f12841v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f12842w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f12843x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f12844y;

    public static Uri a(e eVar, Activity activity, Uri uri) {
        eVar.getClass();
        String E = com.facebook.imagepipeline.nativecode.c.E(activity, uri);
        if (E != null && !E.isEmpty()) {
            File file = new File(E);
            if (file.exists() && file.canRead()) {
                return Uri.fromFile(file);
            }
        }
        String i5 = i(activity, uri);
        if (i5 == null || i5.isEmpty()) {
            i5 = "jpg";
        }
        File file2 = new File(m(activity), UUID.randomUUID().toString() + "." + i5);
        InputStream openInputStream = activity.getContentResolver().openInputStream(uri);
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(file2);
            try {
                if (openInputStream == null) {
                    throw new IOException("Failed to open input stream for content URI");
                }
                byte[] bArr = new byte[8192];
                while (true) {
                    int read = openInputStream.read(bArr);
                    if (read == -1) {
                        fileOutputStream.flush();
                        fileOutputStream.close();
                        openInputStream.close();
                        return Uri.fromFile(file2);
                    }
                    fileOutputStream.write(bArr, 0, read);
                }
            } finally {
            }
        } catch (Throwable th2) {
            if (openInputStream != null) {
                try {
                    openInputStream.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
            }
            throw th2;
        }
    }

    public static void b(UCropActivity uCropActivity, int i5, int i6) {
        try {
            View findViewById = uCropActivity.findViewById(R.id.layout_aspect_ratio);
            if (findViewById != null && (findViewById instanceof ViewGroup)) {
                ViewGroup viewGroup = (ViewGroup) findViewById;
                for (int i10 = 0; i10 < viewGroup.getChildCount(); i10++) {
                    View childAt = viewGroup.getChildAt(i10);
                    if (childAt instanceof ViewGroup) {
                        ViewGroup viewGroup2 = (ViewGroup) childAt;
                        if (viewGroup2.getChildCount() > 0) {
                            View childAt2 = viewGroup2.getChildAt(0);
                            if (childAt2 instanceof TextView) {
                                TextView textView = (TextView) childAt2;
                                if (i5 != -1 || i6 != -1) {
                                    textView.setTextColor(new ColorStateList(new int[][]{new int[]{android.R.attr.state_selected}, new int[0]}, new int[]{i5 != -1 ? i5 : -40192, i6 != -1 ? i6 : -16777216}));
                                }
                            }
                        }
                    }
                }
            }
        } catch (Exception e9) {
            Log.e("ImageCropPicker", "Error applying aspect ratio text colors", e9);
        }
    }

    public static void c(UCropActivity uCropActivity, int i5, int i6, int i10, int i11, int i12) {
        try {
            View findViewById = uCropActivity.findViewById(i5);
            if (findViewById == null) {
                return;
            }
            ImageView imageView = (ImageView) findViewById.findViewById(i6);
            TextView textView = (TextView) findViewById.findViewById(i10);
            if (imageView != null && imageView.getDrawable() != null) {
                Drawable mutate = imageView.getDrawable().mutate();
                if (i11 != -1 && i12 != -1) {
                    mutate.setTintList(new ColorStateList(new int[][]{new int[]{android.R.attr.state_selected}, new int[0]}, new int[]{i11, i12}));
                } else if (i11 != -1) {
                    mutate.setTintList(new ColorStateList(new int[][]{new int[]{android.R.attr.state_selected}, new int[0]}, new int[]{i11, -8355712}));
                } else if (i12 != -1) {
                    mutate.setTintList(new ColorStateList(new int[][]{new int[]{android.R.attr.state_selected}, new int[0]}, new int[]{-40192, i12}));
                }
            }
            if (textView != null) {
                if (i11 != -1 && i12 != -1) {
                    textView.setTextColor(new ColorStateList(new int[][]{new int[]{android.R.attr.state_selected}, new int[0]}, new int[]{i11, i12}));
                } else if (i11 != -1) {
                    textView.setTextColor(new ColorStateList(new int[][]{new int[]{android.R.attr.state_selected}, new int[0]}, new int[]{i11, -8355712}));
                } else if (i12 != -1) {
                    textView.setTextColor(new ColorStateList(new int[][]{new int[]{android.R.attr.state_selected}, new int[0]}, new int[]{-40192, i12}));
                }
            }
        } catch (Exception e9) {
            Log.e("ImageCropPicker", "Error applying widget state colors", e9);
        }
    }

    public static void f(File file) {
        if (file.isDirectory()) {
            for (File file2 : file.listFiles()) {
                f(file2);
            }
        }
        file.delete();
    }

    public static WritableNativeMap h(Intent intent) {
        WritableNativeMap writableNativeMap = new WritableNativeMap();
        writableNativeMap.putInt("x", intent.getIntExtra("com.yalantis.ucrop.OffsetX", -1));
        writableNativeMap.putInt("y", intent.getIntExtra("com.yalantis.ucrop.OffsetY", -1));
        writableNativeMap.putInt("width", intent.getIntExtra("com.yalantis.ucrop.ImageWidth", -1));
        writableNativeMap.putInt("height", intent.getIntExtra("com.yalantis.ucrop.ImageHeight", -1));
        return writableNativeMap;
    }

    public static String i(Activity activity, Uri uri) {
        return uri.getScheme().equals("content") ? MimeTypeMap.getSingleton().getExtensionFromMimeType(activity.getContentResolver().getType(uri)) : MimeTypeMap.getFileExtensionFromUrl(Uri.fromFile(new File(uri.getPath())).toString());
    }

    public static String m(Activity activity) {
        String str = activity.getCacheDir() + "/react-native-image-crop-picker";
        new File(str).mkdir();
        return str;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void o(Activity activity, Promise promise, List list, Callable callable) {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList(list);
        if (Build.VERSION.SDK_INT > 28) {
            arrayList2.remove("android.permission.WRITE_EXTERNAL_STORAGE");
        }
        Iterator it = arrayList2.iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            if (y0.b.a(activity, str) != 0) {
                arrayList.add(str);
            }
        }
        if (!arrayList.isEmpty()) {
            ((PermissionAwareActivity) activity).requestPermissions((String[]) arrayList.toArray(new String[arrayList.size()]), 1, new l(14, promise, callable));
            return;
        }
        try {
            callable.call();
        } catch (Exception e9) {
            promise.reject("E_CALLBACK_ERROR", "Unknown error", e9);
        }
    }

    public static void r(UCropActivity uCropActivity, int i5, int i6) {
        View findViewById = uCropActivity.findViewById(i5);
        if (findViewById == null) {
            return;
        }
        TextView textView = (TextView) findViewById.findViewById(i6);
        if (textView != null && textView.getText() != null) {
            findViewById.setContentDescription(textView.getText());
        }
        s0.p(findViewById, new g(3));
    }

    public static void s(int i5, View view) {
        try {
            Field declaredField = view.getClass().getDeclaredField("mProgressLinePaint");
            declaredField.setAccessible(true);
            Paint paint = (Paint) declaredField.get(view);
            if (paint != null) {
                paint.setColor(i5);
                view.invalidate();
            }
        } catch (Exception e9) {
            Log.e("ImageCropPicker", "Error setting wheel tick color via reflection", e9);
        }
    }

    public static BitmapFactory.Options u(String str) {
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inJustDecodeBounds = true;
        options.inPreferredConfig = Bitmap.Config.RGB_565;
        options.inDither = true;
        BitmapFactory.decodeFile(str, options);
        if (options.outMimeType == null || options.outWidth == 0 || options.outHeight == 0) {
            throw new Exception("Invalid image selected");
        }
        return options;
    }

    public final File d() {
        String str = "image-" + UUID.randomUUID().toString();
        File externalFilesDir = this.f12839e0.getExternalFilesDir(Environment.DIRECTORY_PICTURES);
        if (!externalFilesDir.exists() && !externalFilesDir.isDirectory()) {
            externalFilesDir.mkdirs();
        }
        File createTempFile = File.createTempFile(str, ".jpg", externalFilesDir);
        this.f12834b0 = "file:" + createTempFile.getAbsolutePath();
        return createTempFile;
    }

    public final File e() {
        String str = "video-" + UUID.randomUUID().toString();
        File externalFilesDir = this.f12839e0.getExternalFilesDir(Environment.DIRECTORY_PICTURES);
        if (!externalFilesDir.exists() && !externalFilesDir.isDirectory()) {
            externalFilesDir.mkdirs();
        }
        File createTempFile = File.createTempFile(str, ".mp4", externalFilesDir);
        this.f12834b0 = "file:" + createTempFile.getAbsolutePath();
        return createTempFile;
    }

    public final void g(Activity activity, Uri uri) {
        f fVar = this.f12835c0;
        String p3 = p(activity, uri, false);
        if (p3 == null || p3.isEmpty()) {
            fVar.c("E_NO_IMAGE_DATA_FOUND", "Cannot resolve asset path.");
            return;
        }
        String k = k(p3);
        if (k == null || !k.startsWith("video/")) {
            fVar.d(j(p3));
        } else {
            n(activity, p3, k);
        }
    }

    public final WritableNativeMap j(String str) {
        File k;
        String str2;
        WritableNativeMap writableNativeMap = new WritableNativeMap();
        if (str.startsWith("http://") || str.startsWith("https://")) {
            throw new Exception("Cannot select remote files");
        }
        BitmapFactory.Options u5 = u(str);
        int c6 = new h(str).c();
        boolean z5 = c6 == 6 || c6 == 8 || c6 == 5 || c6 == 7;
        lh.f fVar = this.f12837d0;
        ReactApplicationContext reactApplicationContext = this.f12839e0;
        ReadableMap readableMap = this.M;
        fVar.getClass();
        Integer valueOf = readableMap.hasKey("compressImageMaxWidth") ? Integer.valueOf(readableMap.getInt("compressImageMaxWidth")) : null;
        Integer valueOf2 = readableMap.hasKey("compressImageMaxHeight") ? Integer.valueOf(readableMap.getInt("compressImageMaxHeight")) : null;
        Double valueOf3 = readableMap.hasKey("compressImageQuality") ? Double.valueOf(readableMap.getDouble("compressImageQuality")) : null;
        boolean z6 = valueOf3 == null || valueOf3.doubleValue() == 1.0d;
        boolean z7 = valueOf == null || valueOf.intValue() >= u5.outWidth;
        boolean z8 = valueOf2 == null || valueOf2.intValue() >= u5.outHeight;
        List asList = Arrays.asList(ClipboardModule.MIMETYPE_JPEG, ClipboardModule.MIMETYPE_JPG, ClipboardModule.MIMETYPE_PNG, "image/gif", "image/tiff");
        String str3 = u5.outMimeType;
        boolean z10 = str3 != null && asList.contains(str3.toLowerCase());
        if (z6 && z7 && z8 && z10) {
            Log.d("image-crop-picker", "Skipping image compression");
            k = new File(str);
        } else {
            Log.d("image-crop-picker", "Image compression activated");
            int doubleValue = valueOf3 != null ? (int) (valueOf3.doubleValue() * 100.0d) : 100;
            k0.d.q(doubleValue, "Compressing image with quality ", "image-crop-picker");
            if (valueOf == null) {
                valueOf = Integer.valueOf(u5.outWidth);
            }
            if (valueOf2 == null) {
                valueOf2 = Integer.valueOf(u5.outHeight);
            }
            k = lh.f.k(reactApplicationContext, str, u5.outWidth, u5.outHeight, valueOf.intValue(), valueOf2.intValue(), doubleValue, u5.outMimeType);
        }
        String path = k.getPath();
        BitmapFactory.Options u6 = u(path);
        long lastModified = new File(str).lastModified();
        writableNativeMap.putString("path", "file://" + path);
        writableNativeMap.putInt("width", z5 ? u6.outHeight : u6.outWidth);
        writableNativeMap.putInt("height", z5 ? u6.outWidth : u6.outHeight);
        writableNativeMap.putString("mime", u6.outMimeType);
        writableNativeMap.putInt("size", (int) new File(path).length());
        writableNativeMap.putString("modificationDate", String.valueOf(lastModified));
        writableNativeMap.putString("filename", new File(str).getName());
        if (this.f12840i) {
            try {
                FileInputStream fileInputStream = new FileInputStream(path);
                byte[] bArr = new byte[8192];
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                while (true) {
                    try {
                        int read = fileInputStream.read(bArr);
                        if (read == -1) {
                            break;
                        }
                        byteArrayOutputStream.write(bArr, 0, read);
                    } catch (IOException e9) {
                        e9.printStackTrace();
                    }
                }
                str2 = Base64.encodeToString(byteArrayOutputStream.toByteArray(), 2);
            } catch (FileNotFoundException e10) {
                e10.printStackTrace();
                str2 = null;
            }
            writableNativeMap.putString("data", str2);
        }
        if (this.f12841v) {
            try {
                writableNativeMap.putMap("exif", android.support.v4.media.session.b.j(str));
            } catch (Exception e11) {
                e11.printStackTrace();
            }
        }
        return writableNativeMap;
    }

    public final String k(String str) {
        Uri parse = Uri.parse(str);
        if ("content".equalsIgnoreCase(parse.getScheme())) {
            return this.f12839e0.getContentResolver().getType(parse);
        }
        if (!"file".equalsIgnoreCase(parse.getScheme())) {
            parse = Uri.fromFile(new File(str));
        }
        String fileExtensionFromUrl = MimeTypeMap.getFileExtensionFromUrl(parse.toString());
        if (fileExtensionFromUrl != null) {
            return MimeTypeMap.getSingleton().getMimeTypeFromExtension(fileExtensionFromUrl.toLowerCase());
        }
        return null;
    }

    public final WritableNativeMap l(Activity activity, Uri uri, boolean z5) {
        String p3 = p(activity, uri, z5);
        if (p3 == null || p3.isEmpty()) {
            throw new Exception("Cannot resolve asset path.");
        }
        String k = k(p3);
        if (k == null || !k.startsWith("video/")) {
            return j(p3);
        }
        n(activity, p3, k);
        return null;
    }

    public final void n(Activity activity, String str, String str2) {
        v(Uri.parse(str));
        new Thread(new androidx.fragment.app.e(this, activity, str, m(activity) + "/" + UUID.randomUUID().toString() + ".mp4", str2)).start();
    }

    /* JADX WARN: Can't wrap try/catch for region: R(6:85|(2:87|(5:90|91|92|93|94))|98|92|93|94) */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x0166, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x0167, code lost:
    
        r5.c("E_LOW_MEMORY_ERROR", r0.getMessage());
        r0 = null;
     */
    @Override // com.facebook.react.bridge.ActivityEventListener
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onActivityResult(Activity activity, int i5, int i6, Intent intent) {
        int i10;
        int i11;
        int i12;
        ClipData clipData;
        f fVar = this.f12835c0;
        Log.d("RESULT", "onActivityResult");
        if (i5 == 61110) {
            if (i6 == 0) {
                fVar.c("E_PICKER_CANCELLED", "User cancelled image selection");
                return;
            }
            if (i6 == -1) {
                if (this.f12838e) {
                    ClipData clipData2 = intent.getClipData();
                    try {
                        if (clipData2 == null) {
                            fVar.e(1);
                            g(activity, intent.getData());
                            return;
                        } else {
                            fVar.e(clipData2.getItemCount());
                            for (int i13 = 0; i13 < clipData2.getItemCount(); i13++) {
                                g(activity, clipData2.getItemAt(i13).getUri());
                            }
                            return;
                        }
                    } catch (Exception e9) {
                        fVar.c("E_NO_IMAGE_DATA_FOUND", e9.getMessage());
                        return;
                    }
                }
                Uri data = intent.getData();
                if (data == null && (clipData = intent.getClipData()) != null && clipData.getItemCount() > 0) {
                    data = clipData.getItemAt(0).getUri();
                }
                if (data == null) {
                    fVar.c("E_NO_IMAGE_DATA_FOUND", "Cannot resolve image url");
                    return;
                }
                if (this.f12842w) {
                    t(activity, data, k(data.toString()));
                    return;
                }
                try {
                    g(activity, data);
                    return;
                } catch (Exception e10) {
                    fVar.c("E_NO_IMAGE_DATA_FOUND", e10.getMessage());
                    return;
                }
            }
            return;
        }
        if (i5 == 61111) {
            if (i6 == 0) {
                fVar.c("E_PICKER_CANCELLED", "User cancelled image selection");
                return;
            }
            if (i6 == -1) {
                Uri uri = this.a0;
                if (uri == null) {
                    fVar.c("E_NO_IMAGE_DATA_FOUND", "Cannot resolve image url");
                    return;
                }
                if (this.f12842w) {
                    new Bundle().putString("com.yalantis.ucrop.CompressionFormatName", Bitmap.CompressFormat.JPEG.name());
                    t(activity, uri, k(uri.toString()));
                    return;
                }
                try {
                    fVar.e(1);
                    WritableNativeMap l6 = l(activity, uri, true);
                    if (l6 != null) {
                        fVar.d(l6);
                        return;
                    }
                    return;
                } catch (Exception e11) {
                    fVar.c("E_NO_IMAGE_DATA_FOUND", e11.getMessage());
                    return;
                }
            }
            return;
        }
        if (i5 == 69) {
            if (intent == null) {
                fVar.c("E_PICKER_CANCELLED", "User cancelled image selection");
                return;
            }
            Uri uri2 = (Uri) intent.getParcelableExtra("com.yalantis.ucrop.OutputUri");
            if (uri2 == null) {
                fVar.c("E_NO_IMAGE_DATA_FOUND", "Cannot find image data");
                return;
            }
            try {
                int i14 = this.X;
                if (i14 > 0 && (i10 = this.Y) > 0) {
                    if (this.f12844y) {
                        int intExtra = intent.getIntExtra("com.yalantis.ucrop.ImageWidth", 0);
                        int intExtra2 = intent.getIntExtra("com.yalantis.ucrop.ImageHeight", 0);
                        if (intExtra > 0 && intExtra2 > 0) {
                            float f2 = intExtra;
                            float f10 = intExtra2;
                            float min = Math.min(this.X / f2, this.Y / f10);
                            int round = Math.round(f2 * min);
                            i12 = Math.round(f10 * min);
                            i11 = round;
                            lh.f fVar2 = this.f12837d0;
                            ReactApplicationContext reactApplicationContext = this.f12839e0;
                            String path = uri2.getPath();
                            String k = k(uri2.toString());
                            fVar2.getClass();
                            File file = lh.f.k(reactApplicationContext, path, i11, i12, i11, i12, 100, k);
                            uri2 = Uri.fromFile(file);
                        }
                    }
                    i11 = i14;
                    i12 = i10;
                    lh.f fVar22 = this.f12837d0;
                    ReactApplicationContext reactApplicationContext2 = this.f12839e0;
                    String path2 = uri2.getPath();
                    String k5 = k(uri2.toString());
                    fVar22.getClass();
                    File file2 = lh.f.k(reactApplicationContext2, path2, i11, i12, i11, i12, 100, k5);
                    uri2 = Uri.fromFile(file2);
                }
                WritableNativeMap l7 = l(activity, uri2, false);
                if (l7 == null) {
                    throw new Exception("Cannot crop video files");
                }
                l7.putMap("cropRect", h(intent));
                fVar.e(1);
                fVar.d(l7);
            } catch (Exception e12) {
                fVar.c("E_NO_IMAGE_DATA_FOUND", e12.getMessage());
            }
        }
    }

    public final String p(Activity activity, Uri uri, boolean z5) {
        String path = z5 ? Uri.parse(this.f12834b0).getPath() : com.facebook.imagepipeline.nativecode.c.E(activity, uri);
        if (Build.VERSION.SDK_INT >= 29) {
            String type = activity.getContentResolver().getType(uri);
            if (type != null && type.startsWith("video/")) {
                return com.facebook.imagepipeline.nativecode.c.E(activity, uri);
            }
            String path2 = Uri.fromFile(activity.getExternalCacheDir()).getPath();
            String path3 = Uri.fromFile(activity.getExternalFilesDir(null)).getPath();
            String path4 = Uri.fromFile(activity.getCacheDir()).getPath();
            String path5 = Uri.fromFile(activity.getFilesDir()).getPath();
            if (!path.startsWith(path2) && !path.startsWith(path3) && !path.startsWith(path4) && !path.startsWith(path5)) {
                InputStream openInputStream = activity.getContentResolver().openInputStream(uri);
                String i5 = i(activity, uri);
                File file = new File(activity.getExternalCacheDir(), "/temp/" + System.currentTimeMillis() + "." + i5);
                File parentFile = file.getParentFile();
                if (parentFile != null) {
                    parentFile.mkdirs();
                }
                try {
                    FileOutputStream fileOutputStream = new FileOutputStream(file);
                    byte[] bArr = new byte[openInputStream.available()];
                    openInputStream.read(bArr);
                    fileOutputStream.write(bArr);
                    openInputStream.close();
                    fileOutputStream.close();
                } catch (IOException e9) {
                    Log.w("image-crop-picker", "Error writing " + file, e9);
                }
                return com.facebook.imagepipeline.nativecode.c.E(activity, Uri.fromFile(file));
            }
        }
        return path;
    }

    public final void q(ReadableMap readableMap) {
        this.f12836d = readableMap.hasKey("mediaType") ? readableMap.getString("mediaType") : "any";
        this.f12838e = readableMap.hasKey("multiple") && readableMap.getBoolean("multiple");
        this.f12840i = readableMap.hasKey("includeBase64") && readableMap.getBoolean("includeBase64");
        this.f12841v = readableMap.hasKey("includeExif") && readableMap.getBoolean("includeExif");
        this.X = readableMap.hasKey("width") ? readableMap.getInt("width") : 0;
        this.Y = readableMap.hasKey("height") ? readableMap.getInt("height") : 0;
        this.Z = readableMap.hasKey("maxFiles") ? readableMap.getInt("maxFiles") : this.Z;
        this.f12842w = readableMap.hasKey("cropping") && readableMap.getBoolean("cropping");
        this.N = readableMap.hasKey("cropperActiveWidgetColor") ? readableMap.getString("cropperActiveWidgetColor") : null;
        this.O = readableMap.hasKey("cropperInactiveWidgetColor") ? readableMap.getString("cropperInactiveWidgetColor") : null;
        this.P = readableMap.hasKey("cropperToolbarColor") ? readableMap.getString("cropperToolbarColor") : null;
        this.Q = readableMap.hasKey("cropperToolbarTitle") ? readableMap.getString("cropperToolbarTitle") : null;
        this.R = readableMap.hasKey("cropperToolbarWidgetColor") ? readableMap.getString("cropperToolbarWidgetColor") : null;
        this.S = readableMap.hasKey("cropperControlsColor") ? readableMap.getString("cropperControlsColor") : null;
        this.T = readableMap.hasKey("cropperControlsBarColor") ? readableMap.getString("cropperControlsBarColor") : null;
        this.f12843x = readableMap.hasKey("cropperCircleOverlay") && readableMap.getBoolean("cropperCircleOverlay");
        this.f12844y = readableMap.hasKey("freeStyleCropEnabled") && readableMap.getBoolean("freeStyleCropEnabled");
        this.E = !readableMap.hasKey("showCropGuidelines") || readableMap.getBoolean("showCropGuidelines");
        this.F = !readableMap.hasKey("showCropFrame") || readableMap.getBoolean("showCropFrame");
        this.G = readableMap.hasKey("hideBottomControls") && readableMap.getBoolean("hideBottomControls");
        this.H = readableMap.hasKey("enableRotationGesture") && readableMap.getBoolean("enableRotationGesture");
        this.I = readableMap.hasKey("disableCropperColorSetters") && readableMap.getBoolean("disableCropperColorSetters");
        this.J = readableMap.hasKey("useFrontCamera") && readableMap.getBoolean("useFrontCamera");
        this.K = readableMap.hasKey("cropperStatusBarLight") ? readableMap.getBoolean("cropperStatusBarLight") : true;
        this.L = readableMap.hasKey("cropperNavigationBarLight") ? readableMap.getBoolean("cropperNavigationBarLight") : false;
        this.U = readableMap.hasKey("cropperCancelText") ? readableMap.getString("cropperCancelText") : "Cancel";
        this.V = readableMap.hasKey("cropperRotateByAngleAccessibilityLabel") ? readableMap.getString("cropperRotateByAngleAccessibilityLabel") : null;
        this.W = readableMap.hasKey("cropperResetRotationAccessibilityLabel") ? readableMap.getString("cropperResetRotationAccessibilityLabel") : null;
        this.M = readableMap;
    }

    public final void t(Activity activity, Uri uri, String str) {
        e eVar;
        int i5;
        Bitmap.CompressFormat compressFormat = str.equals(ClipboardModule.MIMETYPE_PNG) ? Bitmap.CompressFormat.PNG : Bitmap.CompressFormat.JPEG;
        Bundle bundle = new Bundle();
        bundle.putString("com.yalantis.ucrop.CompressionFormatName", compressFormat.name());
        bundle.putInt("com.yalantis.ucrop.CompressionQuality", 100);
        bundle.putBoolean("com.yalantis.ucrop.CircleDimmedLayer", this.f12843x);
        bundle.putBoolean("com.yalantis.ucrop.FreeStyleCrop", this.f12844y);
        bundle.putBoolean("com.yalantis.ucrop.ShowCropGrid", this.E);
        bundle.putBoolean("com.yalantis.ucrop.ShowCropFrame", this.F);
        bundle.putBoolean("com.yalantis.ucrop.HideBottomControls", this.G);
        String str2 = this.Q;
        if (str2 != null) {
            bundle.putString("com.yalantis.ucrop.UcropToolbarTitleText", str2);
        }
        if (this.H) {
            bundle.putIntArray("com.yalantis.ucrop.AllowedGestures", new int[]{3, 3, 3});
        }
        if (!this.I) {
            String str3 = this.N;
            if (str3 != null) {
                bundle.putInt("com.yalantis.ucrop.UcropColorControlsWidgetActive", Color.parseColor(str3));
            }
            String str4 = this.P;
            if (str4 != null) {
                bundle.putInt("com.yalantis.ucrop.ToolbarColor", Color.parseColor(str4));
            }
            String str5 = this.R;
            if (str5 != null) {
                bundle.putInt("com.yalantis.ucrop.UcropToolbarWidgetColor", Color.parseColor(str5));
            }
            bundle.putBoolean("com.yalantis.ucrop.StatusBarLight", this.K);
            bundle.putBoolean("com.yalantis.ucrop.NavigationBarLight", this.L);
        }
        String str6 = compressFormat == Bitmap.CompressFormat.PNG ? ".png" : ".jpg";
        Uri fromFile = Uri.fromFile(new File(m(activity), UUID.randomUUID().toString() + str6));
        Intent intent = new Intent();
        Bundle bundle2 = new Bundle();
        bundle2.putParcelable("com.yalantis.ucrop.InputUri", uri);
        bundle2.putParcelable("com.yalantis.ucrop.OutputUri", fromFile);
        bundle2.putAll(bundle);
        int i6 = this.X;
        if (i6 > 0 && (i5 = this.Y) > 0) {
            bundle2.putFloat("com.yalantis.ucrop.AspectRatioX", i6);
            bundle2.putFloat("com.yalantis.ucrop.AspectRatioY", i5);
        }
        if (f12832f0 != null) {
            activity.getApplication().unregisterActivityLifecycleCallbacks(f12832f0);
            f12832f0 = null;
        }
        String str7 = this.S;
        if (str7 == null && this.T == null && this.N == null && this.O == null) {
            eVar = this;
        } else {
            eVar = this;
            f12832f0 = new a(eVar, str7, this.T, this.N, this.O);
            activity.getApplication().registerActivityLifecycleCallbacks(f12832f0);
        }
        if (f12833g0 != null) {
            activity.getApplication().unregisterActivityLifecycleCallbacks(f12833g0);
            f12833g0 = null;
        }
        f12833g0 = new b(this, eVar.U, eVar.V, eVar.W);
        activity.getApplication().registerActivityLifecycleCallbacks(f12833g0);
        intent.setClass(activity, UCropActivity.class);
        intent.putExtras(bundle2);
        activity.startActivityForResult(intent, 69);
    }

    public final Bitmap v(Uri uri) {
        MediaMetadataRetriever mediaMetadataRetriever = new MediaMetadataRetriever();
        mediaMetadataRetriever.setDataSource(this.f12839e0.getCurrentActivity(), uri);
        Bitmap frameAtTime = mediaMetadataRetriever.getFrameAtTime();
        if (frameAtTime == null) {
            throw new Exception("Cannot retrieve video data");
        }
        mediaMetadataRetriever.release();
        return frameAtTime;
    }

    @Override // com.facebook.react.bridge.ActivityEventListener
    public final void onNewIntent(Intent intent) {
    }
}
