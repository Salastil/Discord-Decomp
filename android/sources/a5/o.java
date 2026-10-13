package a5;

import android.text.TextUtils;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final class o {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f204b;

    /* renamed from: c, reason: collision with root package name */
    public final String f205c;

    /* renamed from: d, reason: collision with root package name */
    public final int f206d;

    public o(String str) {
        this.a = str;
        JSONObject jSONObject = new JSONObject(str);
        this.f204b = jSONObject.optString("productId");
        String optString = jSONObject.optString("type");
        this.f205c = optString;
        this.f206d = jSONObject.has("statusCode") ? jSONObject.optInt("statusCode") : 0;
        if (TextUtils.isEmpty(optString)) {
            throw new IllegalArgumentException("Product type cannot be empty.");
        }
        jSONObject.optString("serializedDocid");
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof o) {
            return TextUtils.equals(this.a, ((o) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("UnfetchedProduct{productId='");
        sb2.append(this.f204b);
        sb2.append("', productType='");
        sb2.append(this.f205c);
        sb2.append("', statusCode=");
        return k0.d.m(sb2, this.f206d, "}");
    }
}
