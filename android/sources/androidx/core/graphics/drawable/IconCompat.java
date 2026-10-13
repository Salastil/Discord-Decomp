package androidx.core.graphics.drawable;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.Shader;
import android.graphics.drawable.Icon;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.Log;
import androidx.versionedparcelable.CustomVersionedParcelable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStream;
import jf.a;
import ki.b;
import z0.d;

/* loaded from: classes.dex */
public class IconCompat extends CustomVersionedParcelable {
    public static final PorterDuff.Mode k = PorterDuff.Mode.SRC_IN;
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public Object f1515b;

    /* renamed from: c, reason: collision with root package name */
    public byte[] f1516c;

    /* renamed from: d, reason: collision with root package name */
    public Parcelable f1517d;

    /* renamed from: e, reason: collision with root package name */
    public int f1518e;

    /* renamed from: f, reason: collision with root package name */
    public int f1519f;

    /* renamed from: g, reason: collision with root package name */
    public ColorStateList f1520g;

    /* renamed from: h, reason: collision with root package name */
    public PorterDuff.Mode f1521h;

    /* renamed from: i, reason: collision with root package name */
    public String f1522i;
    public String j;

    public IconCompat() {
        this.a = -1;
        this.f1516c = null;
        this.f1517d = null;
        this.f1518e = 0;
        this.f1519f = 0;
        this.f1520g = null;
        this.f1521h = k;
        this.f1522i = null;
    }

    public static IconCompat a(Bundle bundle) {
        int i5 = bundle.getInt("type");
        IconCompat iconCompat = new IconCompat(i5);
        iconCompat.f1518e = bundle.getInt("int1");
        iconCompat.f1519f = bundle.getInt("int2");
        iconCompat.j = bundle.getString("string1");
        if (bundle.containsKey("tint_list")) {
            iconCompat.f1520g = (ColorStateList) bundle.getParcelable("tint_list");
        }
        if (bundle.containsKey("tint_mode")) {
            iconCompat.f1521h = PorterDuff.Mode.valueOf(bundle.getString("tint_mode"));
        }
        switch (i5) {
            case -1:
            case 1:
            case 5:
                iconCompat.f1515b = bundle.getParcelable("obj");
                return iconCompat;
            case 0:
            default:
                Log.w("IconCompat", "Unknown type " + i5);
                return null;
            case 2:
            case 4:
            case 6:
                iconCompat.f1515b = bundle.getString("obj");
                return iconCompat;
            case 3:
                iconCompat.f1515b = bundle.getByteArray("obj");
                return iconCompat;
        }
    }

    public static Bitmap b(Bitmap bitmap, boolean z5) {
        int min = (int) (Math.min(bitmap.getWidth(), bitmap.getHeight()) * 0.6666667f);
        Bitmap createBitmap = Bitmap.createBitmap(min, min, Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(createBitmap);
        Paint paint = new Paint(3);
        float f2 = min;
        float f10 = 0.5f * f2;
        float f11 = 0.9166667f * f10;
        if (z5) {
            float f12 = 0.010416667f * f2;
            paint.setColor(0);
            paint.setShadowLayer(f12, 0.0f, f2 * 0.020833334f, 1023410176);
            canvas.drawCircle(f10, f10, f11, paint);
            paint.setShadowLayer(f12, 0.0f, 0.0f, 503316480);
            canvas.drawCircle(f10, f10, f11, paint);
            paint.clearShadowLayer();
        }
        paint.setColor(-16777216);
        Shader.TileMode tileMode = Shader.TileMode.CLAMP;
        BitmapShader bitmapShader = new BitmapShader(bitmap, tileMode, tileMode);
        Matrix matrix = new Matrix();
        matrix.setTranslate((-(bitmap.getWidth() - min)) / 2.0f, (-(bitmap.getHeight() - min)) / 2.0f);
        bitmapShader.setLocalMatrix(matrix);
        paint.setShader(bitmapShader);
        canvas.drawCircle(f10, f10, f11, paint);
        canvas.setBitmap(null);
        return createBitmap;
    }

    public static IconCompat c(Bitmap bitmap) {
        bitmap.getClass();
        IconCompat iconCompat = new IconCompat(1);
        iconCompat.f1515b = bitmap;
        return iconCompat;
    }

    public static IconCompat d(Resources resources, String str, int i5) {
        str.getClass();
        if (i5 == 0) {
            throw new IllegalArgumentException("Drawable resource ID must not be 0");
        }
        IconCompat iconCompat = new IconCompat(2);
        iconCompat.f1518e = i5;
        if (resources != null) {
            try {
                iconCompat.f1515b = resources.getResourceName(i5);
            } catch (Resources.NotFoundException unused) {
                throw new IllegalArgumentException("Icon resource cannot be found");
            }
        } else {
            iconCompat.f1515b = str;
        }
        iconCompat.j = str;
        return iconCompat;
    }

    public final Bitmap e() {
        int i5 = this.a;
        if (i5 == -1) {
            Object obj = this.f1515b;
            if (obj instanceof Bitmap) {
                return (Bitmap) obj;
            }
            return null;
        }
        if (i5 == 1) {
            return (Bitmap) this.f1515b;
        }
        if (i5 == 5) {
            return b((Bitmap) this.f1515b, true);
        }
        throw new IllegalStateException("called getBitmap() on " + this);
    }

    public final int f() {
        int i5 = this.a;
        if (i5 == -1) {
            return b.C(this.f1515b);
        }
        if (i5 == 2) {
            return this.f1518e;
        }
        throw new IllegalStateException("called getResId() on " + this);
    }

    public final Uri g() {
        int i5 = this.a;
        if (i5 == -1) {
            return b.H(this.f1515b);
        }
        if (i5 == 4 || i5 == 6) {
            return Uri.parse((String) this.f1515b);
        }
        throw new IllegalStateException("called getUri() on " + this);
    }

    public final InputStream h(Context context) {
        Uri g6 = g();
        String scheme = g6.getScheme();
        if ("content".equals(scheme) || "file".equals(scheme)) {
            try {
                return context.getContentResolver().openInputStream(g6);
            } catch (Exception e9) {
                Log.w("IconCompat", "Unable to load image from URI: " + g6, e9);
                return null;
            }
        }
        try {
            return new FileInputStream(new File((String) this.f1515b));
        } catch (FileNotFoundException e10) {
            Log.w("IconCompat", "Unable to load image from path: " + g6, e10);
            return null;
        }
    }

    public final Icon i(Context context) {
        Icon createWithBitmap;
        String str;
        int i5 = Build.VERSION.SDK_INT;
        switch (this.a) {
            case -1:
                return (Icon) this.f1515b;
            case 0:
            default:
                throw new IllegalArgumentException("Unknown type");
            case 1:
                createWithBitmap = Icon.createWithBitmap((Bitmap) this.f1515b);
                break;
            case 2:
                int i6 = this.a;
                if (i6 == -1) {
                    str = b.D(this.f1515b);
                } else {
                    if (i6 != 2) {
                        throw new IllegalStateException("called getResPackage() on " + this);
                    }
                    String str2 = this.j;
                    str = (str2 == null || TextUtils.isEmpty(str2)) ? ((String) this.f1515b).split(":", -1)[0] : this.j;
                }
                createWithBitmap = Icon.createWithResource(str, this.f1518e);
                break;
            case 3:
                createWithBitmap = Icon.createWithData((byte[]) this.f1515b, this.f1518e, this.f1519f);
                break;
            case 4:
                createWithBitmap = Icon.createWithContentUri((String) this.f1515b);
                break;
            case 5:
                if (i5 < 26) {
                    createWithBitmap = Icon.createWithBitmap(b((Bitmap) this.f1515b, false));
                    break;
                } else {
                    createWithBitmap = a.d((Bitmap) this.f1515b);
                    break;
                }
            case 6:
                if (i5 >= 30) {
                    createWithBitmap = d.a(g());
                    break;
                } else {
                    if (context == null) {
                        throw new IllegalArgumentException("Context is required to resolve the file uri of the icon: " + g());
                    }
                    InputStream h6 = h(context);
                    if (h6 == null) {
                        throw new IllegalStateException("Cannot load adaptive icon from uri: " + g());
                    }
                    if (i5 < 26) {
                        createWithBitmap = Icon.createWithBitmap(b(BitmapFactory.decodeStream(h6), false));
                        break;
                    } else {
                        createWithBitmap = a.d(BitmapFactory.decodeStream(h6));
                        break;
                    }
                }
        }
        ColorStateList colorStateList = this.f1520g;
        if (colorStateList != null) {
            createWithBitmap.setTintList(colorStateList);
        }
        PorterDuff.Mode mode = this.f1521h;
        if (mode != k) {
            createWithBitmap.setTintMode(mode);
        }
        return createWithBitmap;
    }

    public final String toString() {
        String str;
        if (this.a == -1) {
            return String.valueOf(this.f1515b);
        }
        StringBuilder sb2 = new StringBuilder("Icon(typ=");
        switch (this.a) {
            case 1:
                str = "BITMAP";
                break;
            case 2:
                str = "RESOURCE";
                break;
            case 3:
                str = "DATA";
                break;
            case 4:
                str = "URI";
                break;
            case 5:
                str = "BITMAP_MASKABLE";
                break;
            case 6:
                str = "URI_MASKABLE";
                break;
            default:
                str = "UNKNOWN";
                break;
        }
        sb2.append(str);
        switch (this.a) {
            case 1:
            case 5:
                sb2.append(" size=");
                sb2.append(((Bitmap) this.f1515b).getWidth());
                sb2.append("x");
                sb2.append(((Bitmap) this.f1515b).getHeight());
                break;
            case 2:
                sb2.append(" pkg=");
                sb2.append(this.j);
                sb2.append(" id=");
                sb2.append(String.format("0x%08x", Integer.valueOf(f())));
                break;
            case 3:
                sb2.append(" len=");
                sb2.append(this.f1518e);
                if (this.f1519f != 0) {
                    sb2.append(" off=");
                    sb2.append(this.f1519f);
                    break;
                }
                break;
            case 4:
            case 6:
                sb2.append(" uri=");
                sb2.append(this.f1515b);
                break;
        }
        if (this.f1520g != null) {
            sb2.append(" tint=");
            sb2.append(this.f1520g);
        }
        if (this.f1521h != k) {
            sb2.append(" mode=");
            sb2.append(this.f1521h);
        }
        sb2.append(")");
        return sb2.toString();
    }

    public IconCompat(int i5) {
        this.f1516c = null;
        this.f1517d = null;
        this.f1518e = 0;
        this.f1519f = 0;
        this.f1520g = null;
        this.f1521h = k;
        this.f1522i = null;
        this.a = i5;
    }
}
