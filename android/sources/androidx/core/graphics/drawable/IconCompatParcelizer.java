package androidx.core.graphics.drawable;

import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.os.Parcel;
import android.os.Parcelable;
import java.nio.charset.Charset;
import o3.a;
import o3.b;

/* loaded from: classes.dex */
public class IconCompatParcelizer {
    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static IconCompat read(a aVar) {
        IconCompat iconCompat = new IconCompat();
        iconCompat.a = aVar.f(iconCompat.a, 1);
        byte[] bArr = iconCompat.f1516c;
        if (aVar.e(2)) {
            Parcel parcel = ((b) aVar).f15734e;
            int readInt = parcel.readInt();
            if (readInt < 0) {
                bArr = null;
            } else {
                byte[] bArr2 = new byte[readInt];
                parcel.readByteArray(bArr2);
                bArr = bArr2;
            }
        }
        iconCompat.f1516c = bArr;
        iconCompat.f1517d = aVar.g(iconCompat.f1517d, 3);
        iconCompat.f1518e = aVar.f(iconCompat.f1518e, 4);
        iconCompat.f1519f = aVar.f(iconCompat.f1519f, 5);
        iconCompat.f1520g = (ColorStateList) aVar.g(iconCompat.f1520g, 6);
        String str = iconCompat.f1522i;
        if (aVar.e(7)) {
            str = ((b) aVar).f15734e.readString();
        }
        iconCompat.f1522i = str;
        String str2 = iconCompat.j;
        if (aVar.e(8)) {
            str2 = ((b) aVar).f15734e.readString();
        }
        iconCompat.j = str2;
        iconCompat.f1521h = PorterDuff.Mode.valueOf(iconCompat.f1522i);
        switch (iconCompat.a) {
            case -1:
                Parcelable parcelable = iconCompat.f1517d;
                if (parcelable == null) {
                    throw new IllegalArgumentException("Invalid icon");
                }
                iconCompat.f1515b = parcelable;
                return iconCompat;
            case 0:
            default:
                return iconCompat;
            case 1:
            case 5:
                Parcelable parcelable2 = iconCompat.f1517d;
                if (parcelable2 != null) {
                    iconCompat.f1515b = parcelable2;
                    return iconCompat;
                }
                byte[] bArr3 = iconCompat.f1516c;
                iconCompat.f1515b = bArr3;
                iconCompat.a = 3;
                iconCompat.f1518e = 0;
                iconCompat.f1519f = bArr3.length;
                return iconCompat;
            case 2:
            case 4:
            case 6:
                String str3 = new String(iconCompat.f1516c, Charset.forName("UTF-16"));
                iconCompat.f1515b = str3;
                if (iconCompat.a == 2 && iconCompat.j == null) {
                    iconCompat.j = str3.split(":", -1)[0];
                }
                return iconCompat;
            case 3:
                iconCompat.f1515b = iconCompat.f1516c;
                return iconCompat;
        }
    }

    public static void write(IconCompat iconCompat, a aVar) {
        aVar.getClass();
        iconCompat.f1522i = iconCompat.f1521h.name();
        switch (iconCompat.a) {
            case -1:
                iconCompat.f1517d = (Parcelable) iconCompat.f1515b;
                break;
            case 1:
            case 5:
                iconCompat.f1517d = (Parcelable) iconCompat.f1515b;
                break;
            case 2:
                iconCompat.f1516c = ((String) iconCompat.f1515b).getBytes(Charset.forName("UTF-16"));
                break;
            case 3:
                iconCompat.f1516c = (byte[]) iconCompat.f1515b;
                break;
            case 4:
            case 6:
                iconCompat.f1516c = iconCompat.f1515b.toString().getBytes(Charset.forName("UTF-16"));
                break;
        }
        int i5 = iconCompat.a;
        if (-1 != i5) {
            aVar.j(i5, 1);
        }
        byte[] bArr = iconCompat.f1516c;
        if (bArr != null) {
            aVar.i(2);
            Parcel parcel = ((b) aVar).f15734e;
            parcel.writeInt(bArr.length);
            parcel.writeByteArray(bArr);
        }
        Parcelable parcelable = iconCompat.f1517d;
        if (parcelable != null) {
            aVar.k(parcelable, 3);
        }
        int i6 = iconCompat.f1518e;
        if (i6 != 0) {
            aVar.j(i6, 4);
        }
        int i10 = iconCompat.f1519f;
        if (i10 != 0) {
            aVar.j(i10, 5);
        }
        ColorStateList colorStateList = iconCompat.f1520g;
        if (colorStateList != null) {
            aVar.k(colorStateList, 6);
        }
        String str = iconCompat.f1522i;
        if (str != null) {
            aVar.i(7);
            ((b) aVar).f15734e.writeString(str);
        }
        String str2 = iconCompat.j;
        if (str2 != null) {
            aVar.i(8);
            ((b) aVar).f15734e.writeString(str2);
        }
    }
}
