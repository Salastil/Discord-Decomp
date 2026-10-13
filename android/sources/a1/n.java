package a1;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.util.TypedValue;
import androidx.collection.LruCache;
import java.io.IOException;
import java.util.WeakHashMap;
import org.xmlpull.v1.XmlPullParserException;

/* loaded from: classes.dex */
public abstract class n {
    public static final ThreadLocal a = new ThreadLocal();

    /* renamed from: b, reason: collision with root package name */
    public static final WeakHashMap f34b = new WeakHashMap(0);

    /* renamed from: c, reason: collision with root package name */
    public static final Object f35c = new Object();

    /* JADX WARN: Removed duplicated region for block: B:41:0x00c9  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x00ce A[ADDED_TO_REGION] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Typeface a(Context context, int i5, TypedValue typedValue, int i6, b bVar, boolean z5, boolean z6) {
        Resources resources = context.getResources();
        resources.getValue(i5, typedValue, true);
        CharSequence charSequence = typedValue.string;
        if (charSequence == null) {
            throw new Resources.NotFoundException("Resource \"" + resources.getResourceName(i5) + "\" (" + Integer.toHexString(i5) + ") is not a Font: " + typedValue);
        }
        String charSequence2 = charSequence.toString();
        Typeface typeface = null;
        if (charSequence2.startsWith("res/")) {
            int i10 = typedValue.assetCookie;
            LruCache lruCache = b1.f.f2710b;
            Typeface typeface2 = (Typeface) lruCache.a(b1.f.b(resources, i5, charSequence2, i10, i6));
            if (typeface2 != null) {
                if (bVar != null) {
                    new Handler(Looper.getMainLooper()).post(new k(0, bVar, typeface2));
                }
                typeface = typeface2;
            } else if (!z6) {
                try {
                    if (charSequence2.toLowerCase().endsWith(".xml")) {
                        e i11 = b.i(resources.getXml(i5), resources);
                        if (i11 == null) {
                            Log.e("ResourcesCompat", "Failed to find font-family tag");
                            if (bVar != null) {
                                bVar.a(-3);
                            }
                        } else {
                            typeface = b1.f.a(context, i11, resources, i5, charSequence2, typedValue.assetCookie, i6, bVar, z5);
                        }
                    } else {
                        int i12 = typedValue.assetCookie;
                        Typeface l6 = b1.f.a.l(context, resources, i5, charSequence2, i6);
                        if (l6 != null) {
                            lruCache.b(b1.f.b(resources, i5, charSequence2, i12, i6), l6);
                        }
                        if (bVar != null) {
                            if (l6 != null) {
                                new Handler(Looper.getMainLooper()).post(new k(0, bVar, l6));
                            } else {
                                bVar.a(-3);
                            }
                        }
                        typeface = l6;
                    }
                } catch (IOException e9) {
                    Log.e("ResourcesCompat", "Failed to read xml resource ".concat(charSequence2), e9);
                    if (bVar != null) {
                        bVar.a(-3);
                    }
                    if (typeface == null) {
                    }
                    return typeface;
                } catch (XmlPullParserException e10) {
                    Log.e("ResourcesCompat", "Failed to parse xml resource ".concat(charSequence2), e10);
                    if (bVar != null) {
                    }
                    if (typeface == null) {
                    }
                    return typeface;
                }
            }
        } else if (bVar != null) {
            bVar.a(-3);
        }
        if (typeface == null || bVar != null || z6) {
            return typeface;
        }
        throw new Resources.NotFoundException("Font resource ID #0x" + Integer.toHexString(i5) + " could not be retrieved.");
    }
}
