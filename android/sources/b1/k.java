package b1;

import android.content.ContentResolver;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Typeface;
import android.graphics.fonts.Font;
import android.graphics.fonts.FontFamily;
import android.graphics.fonts.FontStyle;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import android.text.TextUtils;
import android.util.Log;
import com.facebook.react.common.assets.ReactFontManager;
import java.io.IOException;
import java.io.InputStream;
import java.util.List;
import java.util.Objects;

/* loaded from: classes.dex */
public class k extends zk.a {
    public static Font P(FontFamily fontFamily, int i5) {
        FontStyle fontStyle = new FontStyle((i5 & 1) != 0 ? ReactFontManager.TypefaceStyle.BOLD : ReactFontManager.TypefaceStyle.NORMAL, (i5 & 2) != 0 ? 1 : 0);
        Font font = fontFamily.getFont(0);
        int S = S(fontStyle, font.getStyle());
        for (int i6 = 1; i6 < fontFamily.getSize(); i6++) {
            Font font2 = fontFamily.getFont(i6);
            int S2 = S(fontStyle, font2.getStyle());
            if (S2 < S) {
                font = font2;
                S = S2;
            }
        }
        return font;
    }

    public static int S(FontStyle fontStyle, FontStyle fontStyle2) {
        return (Math.abs(fontStyle.getWeight() - fontStyle2.getWeight()) / 100) + (fontStyle.getSlant() == fontStyle2.getSlant() ? 0 : 2);
    }

    public final FontFamily Q(i1.g[] gVarArr, ContentResolver contentResolver) {
        Font font;
        String str;
        ParcelFileDescriptor openFileDescriptor;
        FontFamily.Builder builder = null;
        for (i1.g gVar : gVarArr) {
            if (Objects.equals(gVar.a.getScheme(), "systemfont")) {
                font = R(gVar);
            } else {
                try {
                    Uri uri = gVar.a;
                    str = gVar.f10456e;
                    openFileDescriptor = contentResolver.openFileDescriptor(uri, "r", null);
                } catch (IOException e9) {
                    Log.w("TypefaceCompatApi29Impl", "Font load failed", e9);
                }
                if (openFileDescriptor == null) {
                    if (openFileDescriptor != null) {
                        openFileDescriptor.close();
                    }
                    font = null;
                } else {
                    try {
                        Font.Builder ttcIndex = new Font.Builder(openFileDescriptor).setWeight(gVar.f10454c).setSlant(gVar.f10455d ? 1 : 0).setTtcIndex(gVar.f10453b);
                        if (!TextUtils.isEmpty(str)) {
                            ttcIndex.setFontVariationSettings(str);
                        }
                        font = ttcIndex.build();
                        openFileDescriptor.close();
                    } catch (Throwable th2) {
                        try {
                            openFileDescriptor.close();
                        } catch (Throwable th3) {
                            th2.addSuppressed(th3);
                        }
                        throw th2;
                    }
                }
            }
            if (font != null) {
                if (builder == null) {
                    builder = new FontFamily.Builder(font);
                } else {
                    builder.addFont(font);
                }
            }
        }
        if (builder == null) {
            return null;
        }
        return builder.build();
    }

    public Font R(i1.g gVar) {
        throw new UnsupportedOperationException("Getting font from Typeface is not supported before API31");
    }

    @Override // zk.a
    public final Typeface h(Context context, a1.f fVar, Resources resources, int i5) {
        try {
            FontFamily.Builder builder = null;
            for (a1.g gVar : fVar.a) {
                try {
                    Font build = new Font.Builder(resources, gVar.f21f).setWeight(gVar.f17b).setSlant(gVar.f18c ? 1 : 0).setTtcIndex(gVar.f20e).setFontVariationSettings(gVar.f19d).build();
                    if (builder == null) {
                        builder = new FontFamily.Builder(build);
                    } else {
                        builder.addFont(build);
                    }
                } catch (IOException unused) {
                }
            }
            if (builder == null) {
                return null;
            }
            FontFamily build2 = builder.build();
            return new Typeface.CustomFallbackBuilder(build2).setStyle(P(build2, i5).getStyle()).build();
        } catch (Exception e9) {
            Log.w("TypefaceCompatApi29Impl", "Font load failed", e9);
            return null;
        }
    }

    @Override // zk.a
    public final Typeface i(Context context, i1.g[] gVarArr, int i5) {
        try {
            FontFamily Q = Q(gVarArr, context.getContentResolver());
            if (Q == null) {
                return null;
            }
            return new Typeface.CustomFallbackBuilder(Q).setStyle(P(Q, i5).getStyle()).build();
        } catch (Exception e9) {
            Log.w("TypefaceCompatApi29Impl", "Font load failed", e9);
            return null;
        }
    }

    @Override // zk.a
    public final Typeface j(Context context, List list, int i5) {
        ContentResolver contentResolver = context.getContentResolver();
        try {
            FontFamily Q = Q((i1.g[]) list.get(0), contentResolver);
            if (Q == null) {
                return null;
            }
            Typeface.CustomFallbackBuilder customFallbackBuilder = new Typeface.CustomFallbackBuilder(Q);
            for (int i6 = 1; i6 < list.size(); i6++) {
                FontFamily Q2 = Q((i1.g[]) list.get(i6), contentResolver);
                if (Q2 != null) {
                    customFallbackBuilder.addCustomFallback(Q2);
                }
            }
            return customFallbackBuilder.setStyle(P(Q, i5).getStyle()).build();
        } catch (Exception e9) {
            Log.w("TypefaceCompatApi29Impl", "Font load failed", e9);
            return null;
        }
    }

    @Override // zk.a
    public final Typeface k(Context context, InputStream inputStream) {
        throw new RuntimeException("Do not use this function in API 29 or later.");
    }

    @Override // zk.a
    public final Typeface l(Context context, Resources resources, int i5, String str, int i6) {
        try {
            Font build = new Font.Builder(resources, i5).build();
            return new Typeface.CustomFallbackBuilder(new FontFamily.Builder(build).build()).setStyle(build.getStyle()).build();
        } catch (Exception e9) {
            Log.w("TypefaceCompatApi29Impl", "Font load failed", e9);
            return null;
        }
    }

    @Override // zk.a
    public final i1.g o(i1.g[] gVarArr, int i5) {
        throw new RuntimeException("Do not use this function in API 29 or later.");
    }
}
