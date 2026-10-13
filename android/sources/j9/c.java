package j9;

import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Paint;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.NinePatchDrawable;
import com.facebook.drawee.drawable.ScalingUtils$ScaleType;
import com.facebook.drawee.drawable.e;
import com.facebook.drawee.drawable.g;
import com.facebook.drawee.drawable.h;
import com.facebook.drawee.drawable.i;
import com.facebook.drawee.drawable.j;
import com.facebook.drawee.drawable.l;
import com.facebook.drawee.drawable.m;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class c {
    public static final ColorDrawable a = new ColorDrawable(0);

    public static Drawable a(Drawable drawable, b bVar, Resources resources) {
        if (drawable instanceof BitmapDrawable) {
            BitmapDrawable bitmapDrawable = (BitmapDrawable) drawable;
            Bitmap bitmap = bitmapDrawable.getBitmap();
            Paint paint = bitmapDrawable.getPaint();
            bVar.getClass();
            h hVar = new h(resources, bitmap, paint);
            b(hVar, bVar);
            return hVar;
        }
        if (drawable instanceof NinePatchDrawable) {
            NinePatchDrawable ninePatchDrawable = (NinePatchDrawable) drawable;
            Intrinsics.checkNotNullParameter(ninePatchDrawable, "ninePatchDrawable");
            l lVar = new l(ninePatchDrawable);
            b(lVar, bVar);
            return lVar;
        }
        if (!(drawable instanceof ColorDrawable)) {
            p8.a.x("WrappingUtils", "Don't know how to round that drawable: %s", drawable);
            return drawable;
        }
        i iVar = new i(((ColorDrawable) drawable).getColor());
        b(iVar, bVar);
        return iVar;
    }

    public static void b(g gVar, b bVar) {
        gVar.a(bVar.f12431b);
        gVar.g(bVar.f12432c);
        gVar.setBorder(bVar.f12435f, bVar.f12434e);
        gVar.e(bVar.f12436g);
        gVar.f();
        gVar.c(bVar.f12437h);
        gVar.d();
    }

    public static Drawable c(Drawable drawable, b bVar, Resources resources) {
        try {
            ta.a.D();
            if (drawable != null && bVar != null && bVar.a == 2) {
                if (!(drawable instanceof e)) {
                    return a(drawable, bVar, resources);
                }
                com.facebook.drawee.drawable.c cVar = (e) drawable;
                while (true) {
                    Object drawable2 = cVar.getDrawable();
                    if (drawable2 == cVar || !(drawable2 instanceof com.facebook.drawee.drawable.c)) {
                        break;
                    }
                    cVar = (com.facebook.drawee.drawable.c) drawable2;
                }
                cVar.setDrawable(a(cVar.setDrawable(a), bVar, resources));
                return drawable;
            }
            return drawable;
        } finally {
            ta.a.D();
        }
    }

    public static Drawable d(Drawable drawable, b bVar) {
        try {
            ta.a.D();
            if (drawable != null && bVar != null && bVar.a == 1) {
                j jVar = new j(drawable);
                b(jVar, bVar);
                jVar.F = bVar.f12433d;
                jVar.invalidateSelf();
                return jVar;
            }
            return drawable;
        } finally {
            ta.a.D();
        }
    }

    public static Drawable e(Drawable drawable, ScalingUtils$ScaleType scalingUtils$ScaleType) {
        ta.a.D();
        if (drawable == null || scalingUtils$ScaleType == null) {
            ta.a.D();
            return drawable;
        }
        m mVar = new m(drawable, scalingUtils$ScaleType);
        ta.a.D();
        return mVar;
    }
}
