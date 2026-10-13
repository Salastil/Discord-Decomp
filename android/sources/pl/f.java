package pl;

import android.content.Intent;
import android.os.Build;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import kotlin.collections.d0;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String[] f16446b;

    /* renamed from: c, reason: collision with root package name */
    public final String f16447c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f16448d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f16449e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f16450f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f16451g;

    /* JADX WARN: Code restructure failed: missing block: B:13:0x005c, code lost:
    
        if (r1 == null) goto L14;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public f(ReadableMap readableMap) {
        String[] mimeTypes;
        Intrinsics.checkNotNullParameter(readableMap, "readableMap");
        String string = readableMap.getString("mode");
        if (!readableMap.hasKey("type") || readableMap.isNull("type")) {
            mimeTypes = new String[]{"*/*"};
        } else {
            ReadableArray readableArray = readableMap.getArray("type");
            if (readableArray != null) {
                Intrinsics.checkNotNullParameter(readableArray, "readableArray");
                ArrayList<Object> arrayList = readableArray.toArrayList();
                ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
                Iterator<T> it = arrayList.iterator();
                while (it.hasNext()) {
                    String normalizeMimeType = Intent.normalizeMimeType(String.valueOf(it.next()));
                    Intrinsics.checkNotNull(normalizeMimeType);
                    arrayList2.add(normalizeMimeType);
                }
                mimeTypes = (String[]) arrayList2.toArray(new String[0]);
            }
            mimeTypes = new String[]{"*/*"};
        }
        String string2 = readableMap.hasKey("initialDirectoryUrl") ? readableMap.getString("initialDirectoryUrl") : null;
        boolean z5 = readableMap.hasKey("localOnly") && readableMap.getBoolean("localOnly");
        boolean z6 = readableMap.hasKey("allowMultiSelection") && readableMap.getBoolean("allowMultiSelection");
        boolean z7 = readableMap.hasKey("requestLongTermAccess") && readableMap.getBoolean("requestLongTermAccess");
        boolean z8 = readableMap.hasKey("allowVirtualFiles") && readableMap.getBoolean("allowVirtualFiles");
        Intrinsics.checkNotNullParameter(mimeTypes, "mimeTypes");
        this.a = string;
        this.f16446b = mimeTypes;
        this.f16447c = string2;
        this.f16448d = z5;
        this.f16449e = z6;
        this.f16450f = z7;
        this.f16451g = z8;
    }

    public final Intent a() {
        String str;
        String str2;
        String str3 = this.a;
        Intent intent = new Intent(Intrinsics.areEqual("open", str3) ? "android.intent.action.OPEN_DOCUMENT" : "android.intent.action.GET_CONTENT");
        String[] strArr = this.f16446b;
        if (strArr.length > 1) {
            intent.putExtra("android.intent.extra.MIME_TYPES", strArr);
            str = Intrinsics.areEqual(Intrinsics.areEqual("open", str3) ? "android.intent.action.OPEN_DOCUMENT" : "android.intent.action.GET_CONTENT", "android.intent.action.OPEN_DOCUMENT") ? "*/*" : x.A(this.f16446b, "|", null, null, null, 62);
        } else {
            str = strArr[0];
        }
        intent.setType(str);
        if (Build.VERSION.SDK_INT >= 26 && (str2 = this.f16447c) != null) {
            intent.putExtra("android.provider.extra.INITIAL_URI", str2);
        }
        if (!this.f16451g) {
            intent.addCategory("android.intent.category.OPENABLE");
        }
        intent.putExtra("android.intent.extra.LOCAL_ONLY", this.f16448d);
        intent.putExtra("android.intent.extra.ALLOW_MULTIPLE", this.f16449e);
        return intent;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof f)) {
            return false;
        }
        f fVar = (f) obj;
        return Intrinsics.areEqual(this.a, fVar.a) && Intrinsics.areEqual(this.f16446b, fVar.f16446b) && Intrinsics.areEqual(this.f16447c, fVar.f16447c) && this.f16448d == fVar.f16448d && this.f16449e == fVar.f16449e && this.f16450f == fVar.f16450f && this.f16451g == fVar.f16451g;
    }

    public final int hashCode() {
        String str = this.a;
        int hashCode = (((str == null ? 0 : str.hashCode()) * 31) + Arrays.hashCode(this.f16446b)) * 31;
        String str2 = this.f16447c;
        return Boolean.hashCode(this.f16451g) + k0.d.d(k0.d.d(k0.d.d((hashCode + (str2 != null ? str2.hashCode() : 0)) * 31, 31, this.f16448d), 31, this.f16449e), 31, this.f16450f);
    }

    public final String toString() {
        StringBuilder t5 = a3.e.t("PickOptions(mode=", this.a, ", mimeTypes=", Arrays.toString(this.f16446b), ", initialDirectoryUrl=");
        t5.append(this.f16447c);
        t5.append(", localOnly=");
        t5.append(this.f16448d);
        t5.append(", multiple=");
        com.discord.chat.bridge.botuikit.a.s(t5, this.f16449e, ", requestLongTermAccess=", this.f16450f, ", allowVirtualFiles=");
        return com.discord.chat.bridge.botuikit.a.l(t5, this.f16451g, ")");
    }
}
