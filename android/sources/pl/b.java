package pl;

import android.net.Uri;
import android.util.Base64;
import android.webkit.MimeTypeMap;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.Locale;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;

/* loaded from: classes3.dex */
public final class b {
    public final Uri a;

    /* renamed from: b, reason: collision with root package name */
    public String f16430b;

    /* renamed from: c, reason: collision with root package name */
    public Long f16431c;

    /* renamed from: d, reason: collision with root package name */
    public String f16432d;

    /* renamed from: e, reason: collision with root package name */
    public String f16433e;

    /* renamed from: f, reason: collision with root package name */
    public String[] f16434f;

    /* renamed from: g, reason: collision with root package name */
    public String f16435g;

    /* renamed from: h, reason: collision with root package name */
    public String f16436h;

    /* renamed from: i, reason: collision with root package name */
    public Boolean f16437i;

    public b(Uri forUri) {
        Intrinsics.checkNotNullParameter(forUri, "forUri");
        this.a = forUri;
    }

    public final WritableMap a() {
        String str;
        WritableMap createMap = Arguments.createMap();
        createMap.putString(StackTraceHelper.NAME_KEY, this.f16430b);
        createMap.putString("uri", this.a.toString());
        if (this.f16431c != null) {
            createMap.putDouble("size", r1.longValue());
        } else {
            createMap.putNull("size");
        }
        String str2 = this.f16432d;
        String str3 = null;
        if (str2 != null) {
            str = str2.toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(str, "toLowerCase(...)");
        } else {
            str = null;
        }
        createMap.putString("type", str);
        String str4 = this.f16432d;
        if (str4 != null) {
            str3 = str4.toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(str3, "toLowerCase(...)");
        }
        createMap.putString("nativeType", str3);
        String[] strArr = this.f16434f;
        if (strArr != null) {
            WritableArray createArray = Arguments.createArray();
            for (String str5 : strArr) {
                String extensionFromMimeType = MimeTypeMap.getSingleton().getExtensionFromMimeType(str5);
                WritableMap createMap2 = Arguments.createMap();
                createMap2.putString("mimeType", str5);
                createMap2.putString("extension", extensionFromMimeType);
                createArray.pushMap(createMap2);
            }
            createMap.putArray("convertibleToMimeTypes", createArray);
        } else {
            createMap.putNull("convertibleToMimeTypes");
        }
        createMap.putString("error", this.f16433e);
        Boolean bool = this.f16437i;
        if (bool != null) {
            createMap.putBoolean("isVirtual", bool.booleanValue());
        } else {
            createMap.putNull("isVirtual");
        }
        String str6 = this.f16435g;
        if (str6 == null) {
            String str7 = this.f16436h;
            if (str7 != null) {
                createMap.putString("bookmarkStatus", "error");
                createMap.putString("bookmarkError", str7);
            }
            return createMap;
        }
        byte[] bytes = str6.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
        String encodeToString = Base64.encodeToString(bytes, 0);
        createMap.putString("bookmarkStatus", "success");
        createMap.putString("bookmark", encodeToString);
        return createMap;
    }
}
