package ca;

import com.facebook.animated.gif.GifImage;
import com.facebook.animated.webp.WebPImage;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.google.firebase.messaging.r;
import e4.i;
import java.util.ArrayList;
import r3.g;

/* loaded from: classes3.dex */
public final class b {
    public static final a a;

    /* renamed from: b, reason: collision with root package name */
    public static final a f3363b;

    static {
        a aVar;
        a aVar2 = null;
        try {
            aVar = (a) GifImage.class.newInstance();
        } catch (Throwable unused) {
            aVar = null;
        }
        a = aVar;
        try {
            aVar2 = (a) WebPImage.class.newInstance();
        } catch (Throwable unused2) {
        }
        f3363b = aVar2;
    }

    public b(g gVar, PlatformBitmapFactory platformBitmapFactory, boolean z5) {
    }

    public static oa.b a(String str, ImageDecodeOptions imageDecodeOptions, ba.b bVar) {
        imageDecodeOptions.getClass();
        r rVar = new r(bVar);
        rVar.f6261v = null;
        rVar.f6262w = null;
        rVar.f6259e = str;
        try {
            i iVar = new i(rVar);
            CloseableReference.l((CloseableReference) rVar.f6261v);
            rVar.f6261v = null;
            CloseableReference.o((ArrayList) rVar.f6262w);
            rVar.f6262w = null;
            oa.b bVar2 = new oa.b();
            bVar2.f15803v = iVar;
            bVar2.f15804w = true;
            return bVar2;
        } catch (Throwable th2) {
            CloseableReference.l((CloseableReference) rVar.f6261v);
            rVar.f6261v = null;
            CloseableReference.o((ArrayList) rVar.f6262w);
            rVar.f6262w = null;
            throw th2;
        }
    }
}
