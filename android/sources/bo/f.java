package bo;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Point;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.util.Base64;
import android.util.Log;
import android.view.PixelCopy;
import android.view.SurfaceView;
import android.view.TextureView;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ScrollView;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.bridge.Promise;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.NativeViewHierarchyManager;
import com.facebook.react.uimanager.UIBlock;
import ii.o;
import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStream;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Locale;
import java.util.Set;
import java.util.WeakHashMap;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.Executor;
import java.util.concurrent.TimeUnit;
import java.util.zip.Deflater;

/* loaded from: classes3.dex */
public final class f implements UIBlock {

    /* renamed from: n, reason: collision with root package name */
    public static byte[] f3121n = new byte[KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT];

    /* renamed from: o, reason: collision with root package name */
    public static final Object f3122o = new Object();

    /* renamed from: p, reason: collision with root package name */
    public static final Set f3123p = Collections.newSetFromMap(new WeakHashMap());
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final String f3124b;

    /* renamed from: c, reason: collision with root package name */
    public final int f3125c;

    /* renamed from: d, reason: collision with root package name */
    public final double f3126d;

    /* renamed from: e, reason: collision with root package name */
    public final Integer f3127e;

    /* renamed from: f, reason: collision with root package name */
    public final Integer f3128f;

    /* renamed from: g, reason: collision with root package name */
    public final File f3129g;

    /* renamed from: h, reason: collision with root package name */
    public final String f3130h;

    /* renamed from: i, reason: collision with root package name */
    public final Promise f3131i;
    public final Boolean j;
    public final boolean k;

    /* renamed from: l, reason: collision with root package name */
    public final Activity f3132l;

    /* renamed from: m, reason: collision with root package name */
    public final Executor f3133m;

    public f(int i5, String str, int i6, double d6, Integer num, Integer num2, File file, String str2, Boolean bool, Activity activity, boolean z5, Promise promise, Executor executor) {
        this.a = i5;
        this.f3124b = str;
        this.f3125c = i6;
        this.f3126d = d6;
        this.f3127e = num;
        this.f3128f = num2;
        this.f3129g = file;
        this.f3130h = str2;
        this.j = bool;
        this.f3132l = activity;
        this.k = z5;
        this.f3131i = promise;
        this.f3133m = executor;
    }

    public static void a(f fVar, View view) {
        String sb2;
        boolean z5 = -1 == fVar.f3125c;
        boolean equals = "zip-base64".equals(fVar.f3130h);
        e eVar = new e(f3121n);
        try {
            Point e9 = fVar.e(view, eVar);
            eVar.close();
            f3121n = eVar.f();
            int size = eVar.size();
            Locale locale = Locale.US;
            String str = e9.x + ":" + e9.y + "|";
            if (!z5) {
                str = "";
            }
            if (equals) {
                Deflater deflater = new Deflater();
                deflater.setInput(f3121n, 0, size);
                deflater.finish();
                e eVar2 = new e(new byte[32]);
                byte[] bArr = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
                while (!deflater.finished()) {
                    eVar2.write(bArr, 0, deflater.deflate(bArr));
                }
                StringBuilder o6 = k0.d.o(str);
                o6.append(Base64.encodeToString(eVar2.f(), 0, eVar2.size(), 2));
                sb2 = o6.toString();
            } else {
                StringBuilder o7 = k0.d.o(str);
                o7.append(Base64.encodeToString(f3121n, 0, size, 2));
                sb2 = o7.toString();
            }
            fVar.f3131i.resolve(sb2);
        } catch (Throwable th2) {
            eVar.close();
            throw th2;
        }
    }

    public static void b(f fVar, View view) {
        e eVar = new e(f3121n);
        try {
            fVar.e(view, eVar);
            eVar.close();
            f3121n = eVar.f();
            String encodeToString = Base64.encodeToString(f3121n, 0, eVar.size(), 2);
            String str = fVar.f3124b;
            if ("jpg".equals(str)) {
                str = "jpeg";
            }
            fVar.f3131i.resolve("data:image/" + str + ";base64," + encodeToString);
        } catch (Throwable th2) {
            eVar.close();
            throw th2;
        }
    }

    public static void c(f fVar, View view) {
        File file = fVar.f3129g;
        String uri = Uri.fromFile(file).toString();
        FileOutputStream fileOutputStream = new FileOutputStream(file);
        e eVar = new e(f3121n);
        try {
            Point e9 = fVar.e(view, eVar);
            eVar.close();
            f3121n = eVar.f();
            int size = eVar.size();
            Locale locale = Locale.US;
            fileOutputStream.write((e9.x + ":" + e9.y + "|").getBytes(Charset.forName("US-ASCII")));
            fileOutputStream.write(f3121n, 0, size);
            fileOutputStream.close();
            fVar.f3131i.resolve(uri);
        } catch (Throwable th2) {
            eVar.close();
            throw th2;
        }
    }

    public static Matrix d(Canvas canvas, View view, View view2) {
        Matrix matrix = new Matrix();
        LinkedList linkedList = new LinkedList();
        View view3 = view2;
        do {
            linkedList.add(view3);
            view3 = (View) view3.getParent();
        } while (view3 != view);
        Collections.reverse(linkedList);
        Iterator it = linkedList.iterator();
        while (it.hasNext()) {
            View view4 = (View) it.next();
            canvas.save();
            int i5 = 0;
            float translationX = view4.getTranslationX() + view4.getLeft() + (view4 != view2 ? view4.getPaddingLeft() : 0);
            int top = view4.getTop();
            if (view4 != view2) {
                i5 = view4.getPaddingTop();
            }
            float translationY = view4.getTranslationY() + top + i5;
            canvas.translate(translationX, translationY);
            canvas.rotate(view4.getRotation(), view4.getPivotX(), view4.getPivotY());
            canvas.scale(view4.getScaleX(), view4.getScaleY());
            matrix.postTranslate(translationX, translationY);
            matrix.postRotate(view4.getRotation(), view4.getPivotX(), view4.getPivotY());
            matrix.postScale(view4.getScaleX(), view4.getScaleY());
        }
        return matrix;
    }

    public static ArrayList f(View view) {
        if (!(view instanceof ViewGroup)) {
            ArrayList arrayList = new ArrayList();
            arrayList.add(view);
            return arrayList;
        }
        ArrayList arrayList2 = new ArrayList();
        ViewGroup viewGroup = (ViewGroup) view;
        for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
            arrayList2.addAll(f(viewGroup.getChildAt(i5)));
        }
        return arrayList2;
    }

    public static Bitmap g(int i5, int i6) {
        synchronized (f3122o) {
            try {
                for (Bitmap bitmap : f3123p) {
                    if (bitmap.getWidth() == i5 && bitmap.getHeight() == i6) {
                        f3123p.remove(bitmap);
                        bitmap.eraseColor(0);
                        return bitmap;
                    }
                }
                return Bitmap.createBitmap(i5, i6, Bitmap.Config.ARGB_8888);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public static void h(Bitmap bitmap) {
        synchronized (f3122o) {
            f3123p.add(bitmap);
        }
    }

    public final Point e(View view, OutputStream outputStream) {
        int i5;
        Bitmap createBitmap;
        SurfaceView surfaceView;
        View view2 = view;
        int width = view2.getWidth();
        int height = view2.getHeight();
        if (width <= 0 || height <= 0) {
            throw new RuntimeException("Impossible to snapshot the view: view is invalid");
        }
        boolean z5 = false;
        if (this.j.booleanValue()) {
            ScrollView scrollView = (ScrollView) view2;
            int i6 = 0;
            for (int i10 = 0; i10 < scrollView.getChildCount(); i10++) {
                i6 += scrollView.getChildAt(i10).getHeight();
            }
            i5 = i6;
        } else {
            i5 = height;
        }
        Point point = new Point(width, i5);
        synchronized (f3122o) {
            try {
                Iterator it = f3123p.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        createBitmap = Bitmap.createBitmap(width, i5, Bitmap.Config.ARGB_8888);
                        break;
                    }
                    createBitmap = (Bitmap) it.next();
                    if (createBitmap.getWidth() == width && createBitmap.getHeight() == i5) {
                        f3123p.remove(createBitmap);
                        createBitmap.eraseColor(0);
                        break;
                    }
                }
            } finally {
            }
        }
        Bitmap bitmap = createBitmap;
        Paint paint = new Paint();
        paint.setAntiAlias(true);
        paint.setFilterBitmap(true);
        paint.setDither(true);
        Canvas canvas = new Canvas(bitmap);
        view2.draw(canvas);
        Iterator it2 = f(view2).iterator();
        while (it2.hasNext()) {
            View view3 = (View) it2.next();
            if (view3 instanceof TextureView) {
                if (view3.getVisibility() == 0) {
                    TextureView textureView = (TextureView) view3;
                    textureView.setOpaque(z5);
                    Bitmap bitmap2 = textureView.getBitmap(g(view3.getWidth(), view3.getHeight()));
                    int save = canvas.save();
                    d(canvas, view2, view3);
                    canvas.drawBitmap(bitmap2, 0.0f, 0.0f, paint);
                    canvas.restoreToCount(save);
                    h(bitmap2);
                }
            } else if ((view3 instanceof SurfaceView) && this.k) {
                SurfaceView surfaceView2 = (SurfaceView) view3;
                CountDownLatch countDownLatch = new CountDownLatch(1);
                Bitmap g6 = g(view3.getWidth(), view3.getHeight());
                try {
                    surfaceView = surfaceView2;
                } catch (Exception e9) {
                    e = e9;
                    surfaceView = surfaceView2;
                }
                try {
                    PixelCopy.request(surfaceView, g6, new c(this, canvas, view2, (SurfaceView) view3, g6, paint, countDownLatch), new Handler(Looper.getMainLooper()));
                    countDownLatch.await(5L, TimeUnit.SECONDS);
                } catch (Exception e10) {
                    e = e10;
                    Log.e("f", "Cannot PixelCopy for " + surfaceView, e);
                    view2 = view;
                    z5 = false;
                }
            }
            view2 = view;
            z5 = false;
        }
        Integer num = this.f3127e;
        if (num != null && this.f3128f != null && (num.intValue() != width || this.f3128f.intValue() != i5)) {
            Bitmap createScaledBitmap = Bitmap.createScaledBitmap(bitmap, this.f3127e.intValue(), this.f3128f.intValue(), true);
            h(bitmap);
            bitmap = createScaledBitmap;
        }
        int i11 = this.f3125c;
        if (-1 == i11 && (outputStream instanceof e)) {
            int i12 = width * i5 * 4;
            e eVar = (e) outputStream;
            bitmap.copyPixelsToBuffer(eVar.c(i12));
            eVar.g(i12);
        } else {
            bitmap.compress(d.a[i11], (int) (this.f3126d * 100.0d), outputStream);
        }
        h(bitmap);
        return point;
    }

    @Override // com.facebook.react.uimanager.UIBlock
    public final void execute(NativeViewHierarchyManager nativeViewHierarchyManager) {
        this.f3133m.execute(new o(this, nativeViewHierarchyManager, 5, false));
    }
}
