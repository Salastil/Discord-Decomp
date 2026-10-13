package androidx.core.app;

import android.content.res.ColorStateList;
import android.graphics.Bitmap;
import android.graphics.PorterDuff;
import android.os.Bundle;
import android.os.Parcelable;
import androidx.core.graphics.drawable.IconCompat;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.Objects;

/* loaded from: classes.dex */
public final class Person {
    public CharSequence a;

    /* renamed from: b, reason: collision with root package name */
    public IconCompat f1481b;

    /* renamed from: c, reason: collision with root package name */
    public String f1482c;

    /* renamed from: d, reason: collision with root package name */
    public String f1483d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f1484e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f1485f;

    public static Person a(Bundle bundle) {
        Bundle bundle2 = bundle.getBundle("icon");
        CharSequence charSequence = bundle.getCharSequence(StackTraceHelper.NAME_KEY);
        IconCompat a = bundle2 != null ? IconCompat.a(bundle2) : null;
        String string = bundle.getString("uri");
        String string2 = bundle.getString("key");
        boolean z5 = bundle.getBoolean("isBot");
        boolean z6 = bundle.getBoolean("isImportant");
        Person person = new Person();
        person.a = charSequence;
        person.f1481b = a;
        person.f1482c = string;
        person.f1483d = string2;
        person.f1484e = z5;
        person.f1485f = z6;
        return person;
    }

    public final Bundle b() {
        Bundle bundle;
        Bundle bundle2 = new Bundle();
        bundle2.putCharSequence(StackTraceHelper.NAME_KEY, this.a);
        IconCompat iconCompat = this.f1481b;
        if (iconCompat != null) {
            bundle = new Bundle();
            switch (iconCompat.a) {
                case -1:
                    bundle.putParcelable("obj", (Parcelable) iconCompat.f1515b);
                    break;
                case 0:
                default:
                    throw new IllegalArgumentException("Invalid icon");
                case 1:
                case 5:
                    bundle.putParcelable("obj", (Bitmap) iconCompat.f1515b);
                    break;
                case 2:
                case 4:
                case 6:
                    bundle.putString("obj", (String) iconCompat.f1515b);
                    break;
                case 3:
                    bundle.putByteArray("obj", (byte[]) iconCompat.f1515b);
                    break;
            }
            bundle.putInt("type", iconCompat.a);
            bundle.putInt("int1", iconCompat.f1518e);
            bundle.putInt("int2", iconCompat.f1519f);
            bundle.putString("string1", iconCompat.j);
            ColorStateList colorStateList = iconCompat.f1520g;
            if (colorStateList != null) {
                bundle.putParcelable("tint_list", colorStateList);
            }
            PorterDuff.Mode mode = iconCompat.f1521h;
            if (mode != IconCompat.k) {
                bundle.putString("tint_mode", mode.name());
            }
        } else {
            bundle = null;
        }
        bundle2.putBundle("icon", bundle);
        bundle2.putString("uri", this.f1482c);
        bundle2.putString("key", this.f1483d);
        bundle2.putBoolean("isBot", this.f1484e);
        bundle2.putBoolean("isImportant", this.f1485f);
        return bundle2;
    }

    public final boolean equals(Object obj) {
        if (obj == null || !(obj instanceof Person)) {
            return false;
        }
        Person person = (Person) obj;
        String str = this.f1483d;
        String str2 = person.f1483d;
        return (str == null && str2 == null) ? Objects.equals(Objects.toString(this.a), Objects.toString(person.a)) && Objects.equals(this.f1482c, person.f1482c) && Boolean.valueOf(this.f1484e).equals(Boolean.valueOf(person.f1484e)) && Boolean.valueOf(this.f1485f).equals(Boolean.valueOf(person.f1485f)) : Objects.equals(str, str2);
    }

    public final int hashCode() {
        String str = this.f1483d;
        return str != null ? str.hashCode() : Objects.hash(this.a, this.f1482c, Boolean.valueOf(this.f1484e), Boolean.valueOf(this.f1485f));
    }
}
