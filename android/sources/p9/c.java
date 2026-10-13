package p9;

import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.util.Log;
import android.util.SparseArray;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import e4.l;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayDeque;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.flow.MutableStateFlow;
import o8.h;
import oa.j;
import oa.k;
import qa.t;
import rd.u;
import th.m1;
import th.p0;
import th.s;
import th.v0;
import uh.g;
import ve.i;

/* loaded from: classes3.dex */
public final class c implements ma.b, g {

    /* renamed from: d, reason: collision with root package name */
    public final Object f16323d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f16324e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f16325i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f16326v;

    /* renamed from: w, reason: collision with root package name */
    public final Object f16327w;

    public c(uh.f fVar, t tVar, uh.f fVar2, uh.f fVar3, uh.f fVar4) {
        this.f16323d = fVar;
        this.f16324e = tVar;
        this.f16325i = fVar2;
        this.f16326v = fVar3;
        this.f16327w = fVar4;
    }

    public static c b(SharedPreferences sharedPreferences, ScheduledThreadPoolExecutor scheduledThreadPoolExecutor) {
        c cVar = new c(sharedPreferences, scheduledThreadPoolExecutor);
        synchronized (((ArrayDeque) cVar.f16326v)) {
            try {
                ((ArrayDeque) cVar.f16326v).clear();
                String string = ((SharedPreferences) cVar.f16323d).getString((String) cVar.f16324e, "");
                if (!TextUtils.isEmpty(string) && string.contains((String) cVar.f16325i)) {
                    String[] split = string.split((String) cVar.f16325i, -1);
                    if (split.length == 0) {
                        Log.e("FirebaseMessaging", "Corrupted queue. Please check the queue contents and item separator provided");
                    }
                    for (String str : split) {
                        if (!TextUtils.isEmpty(str)) {
                            ((ArrayDeque) cVar.f16326v).add(str);
                        }
                    }
                    return cVar;
                }
                return cVar;
            } finally {
            }
        }
    }

    @Override // uh.g
    public Object a() {
        Object a = ((uh.f) this.f16323d).a();
        int i5 = 7;
        return new m1((s) a, new uh.f(new u(7, (t) this.f16324e)), (v0) ((uh.f) this.f16325i).a(), new uh.f(new u(i5, (uh.f) this.f16326v)), (p0) ((uh.f) this.f16327w).a());
    }

    public oa.g c(EncodedImage encodedImage, ImageDecodeOptions imageDecodeOptions) {
        CloseableReference a = ((ra.d) this.f16326v).a(encodedImage, imageDecodeOptions.a);
        try {
            a.getClass();
            j jVar = j.f15814d;
            int rotationAngle = encodedImage.getRotationAngle();
            int exifOrientation = encodedImage.getExifOrientation();
            int i5 = oa.g.F;
            oa.g gVar = new oa.g(a, jVar, rotationAngle, exifOrientation);
            gVar.A(Boolean.FALSE, "is_rounded");
            a.close();
            return gVar;
        } catch (Throwable th2) {
            CloseableReference.l(a);
            throw th2;
        }
    }

    public void d(Object obj, String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        ((LinkedHashMap) this.f16323d).put(key, obj);
        MutableStateFlow mutableStateFlow = (MutableStateFlow) ((LinkedHashMap) this.f16325i).get(key);
        if (mutableStateFlow != null) {
            mutableStateFlow.setValue(obj);
        }
        MutableStateFlow mutableStateFlow2 = (MutableStateFlow) ((LinkedHashMap) this.f16326v).get(key);
        if (mutableStateFlow2 != null) {
            mutableStateFlow2.setValue(obj);
        }
    }

    @Override // ma.b
    public oa.c p(EncodedImage encodedImage, int i5, k kVar, ImageDecodeOptions imageDecodeOptions) {
        InputStream is2;
        imageDecodeOptions.getClass();
        aa.c imageFormat = encodedImage.getImageFormat();
        if ((imageFormat == null || imageFormat == aa.c.f275c) && (is2 = encodedImage.getInputStream()) != null) {
            Object obj = aa.d.f277d;
            Intrinsics.checkNotNullParameter(is2, "is");
            try {
                encodedImage.setImageFormat(d9.a.q(is2));
            } catch (IOException e9) {
                h.h(e9);
                throw null;
            }
        }
        return ((i) this.f16327w).p(encodedImage, i5, kVar, imageDecodeOptions);
    }

    public c(PlatformBitmapFactory platformBitmapFactory, s9.a bitmapFrameRenderer, Bitmap.Config bitmapConfig, ExecutorService executorService) {
        Intrinsics.checkNotNullParameter(platformBitmapFactory, "platformBitmapFactory");
        Intrinsics.checkNotNullParameter(bitmapFrameRenderer, "bitmapFrameRenderer");
        Intrinsics.checkNotNullParameter(bitmapConfig, "bitmapConfig");
        Intrinsics.checkNotNullParameter(executorService, "executorService");
        this.f16323d = platformBitmapFactory;
        this.f16324e = bitmapFrameRenderer;
        this.f16325i = bitmapConfig;
        this.f16326v = executorService;
        this.f16327w = new SparseArray();
    }

    public c(Map initialState) {
        Intrinsics.checkNotNullParameter(initialState, "initialState");
        this.f16323d = kotlin.collections.v0.o(initialState);
        this.f16324e = new LinkedHashMap();
        this.f16325i = new LinkedHashMap();
        this.f16326v = new LinkedHashMap();
        this.f16327w = new e.c(1, this);
    }

    public c(SharedPreferences sharedPreferences, ScheduledThreadPoolExecutor scheduledThreadPoolExecutor) {
        this.f16326v = new ArrayDeque();
        this.f16323d = sharedPreferences;
        this.f16324e = "topic_operation_queue";
        this.f16325i = ",";
        this.f16327w = scheduledThreadPoolExecutor;
    }

    public c(u uVar, ni.a aVar, l lVar, ra.d dVar) {
        this.f16327w = new i(this);
        this.f16323d = uVar;
        this.f16324e = aVar;
        this.f16325i = lVar;
        this.f16326v = dVar;
    }
}
