package com.appsflyer.internal;

import android.util.Base64;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.nio.charset.Charset;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlin.text.StringsKt__StringsKt;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;
import org.json.JSONObject;

@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u000b\b\u0086\b\u0018\u0000 \u001a2\u00020\u0001:\u0001\u001aB)\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0004\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0002\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\b\u0010\tJ\u001a\u0010\u000b\u001a\u00020\n2\b\u0010\u0003\u001a\u0004\u0018\u00010\u0001HÖ\u0003¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\r\u001a\u00020\u0006HÖ\u0001¢\u0006\u0004\b\r\u0010\u000eJ\u000f\u0010\u0010\u001a\u00020\u000fH\u0007¢\u0006\u0004\b\u0010\u0010\u0011J\u000f\u0010\u0012\u001a\u00020\u0002H\u0007¢\u0006\u0004\b\u0012\u0010\u0013J\u0010\u0010\u0014\u001a\u00020\u0002H×\u0001¢\u0006\u0004\b\u0014\u0010\u0013R\u0016\u0010\u0017\u001a\u00020\u00068\u0006@\u0006X\u0087\f¢\u0006\u0006\n\u0004\b\u0015\u0010\u0016R\u0014\u0010\u0015\u001a\u00020\u00028\u0007X\u0087\u0004¢\u0006\u0006\n\u0004\b\u0018\u0010\u0019R\u0014\u0010\u0018\u001a\u00020\u00028\u0006X\u0087\u0004¢\u0006\u0006\n\u0004\b\u0012\u0010\u0019R\u0014\u0010\u0012\u001a\u00020\u00028\u0006X\u0087\u0004¢\u0006\u0006\n\u0004\b\u0010\u0010\u0019"}, d2 = {"Lcom/appsflyer/internal/AFc1cSDK;", "", "", "p0", "p1", "p2", "", "p3", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", "", "equals", "(Ljava/lang/Object;)Z", "hashCode", "()I", "Lorg/json/JSONObject;", "AFAdRevenueData", "()Lorg/json/JSONObject;", "getMediationNetwork", "()Ljava/lang/String;", "toString", "getCurrencyIso4217Code", "I", "getMonetizationNetwork", "getRevenue", "Ljava/lang/String;", "AFa1vSDK"}, k = 1, mv = {1, 8, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class AFc1cSDK {

    /* renamed from: AFa1vSDK, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    /* renamed from: AFAdRevenueData, reason: from kotlin metadata */
    @NotNull
    public String getMediationNetwork;

    /* renamed from: getCurrencyIso4217Code, reason: from kotlin metadata */
    int getMonetizationNetwork;

    /* renamed from: getMediationNetwork, reason: from kotlin metadata */
    @NotNull
    public String getRevenue;

    /* renamed from: getRevenue, reason: from kotlin metadata */
    @NotNull
    final String getCurrencyIso4217Code;

    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0011\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0087\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J1\u0010\n\u001a\u00020\t2\b\u0010\u0005\u001a\u0004\u0018\u00010\u00042\u0016\u0010\b\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u00010\u00070\u0006\"\u0004\u0018\u00010\u0007H\u0002¢\u0006\u0004\b\n\u0010\u000bJ\u0019\u0010\r\u001a\u0004\u0018\u00010\f2\u0006\u0010\u0005\u001a\u00020\u0007H\u0007¢\u0006\u0004\b\r\u0010\u000eJ\u001b\u0010\r\u001a\u00020\u0007*\u00020\u00072\u0006\u0010\u0005\u001a\u00020\u0007H\u0002¢\u0006\u0004\b\r\u0010\u000f"}, d2 = {"Lcom/appsflyer/internal/AFc1cSDK$AFa1vSDK;", "", "<init>", "()V", "", "p0", "", "", "p1", "", "AFAdRevenueData", "(Ljava/lang/Integer;[Ljava/lang/String;)Z", "Lcom/appsflyer/internal/AFc1cSDK;", "getCurrencyIso4217Code", "(Ljava/lang/String;)Lcom/appsflyer/internal/AFc1cSDK;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;"}, k = 1, mv = {1, 8, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nExceptionInfo.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ExceptionInfo.kt\ncom/appsflyer/internal/components/monitorsdk/exmanager/ExceptionInfo$Companion\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,94:1\n13579#2,2:95\n*S KotlinDebug\n*F\n+ 1 ExceptionInfo.kt\ncom/appsflyer/internal/components/monitorsdk/exmanager/ExceptionInfo$Companion\n*L\n65#1:95,2\n*E\n"})
    /* renamed from: com.appsflyer.internal.AFc1cSDK$AFa1vSDK, reason: from kotlin metadata */
    public static final class Companion {
        private Companion() {
        }

        private static boolean AFAdRevenueData(Integer p02, String... p12) {
            boolean z5 = p02 == null;
            int length = p12.length;
            for (int i5 = 0; i5 < 3; i5++) {
                String str = p12[i5];
                z5 = z5 || str == null || str.length() == 0;
            }
            return z5;
        }

        public static AFc1cSDK getCurrencyIso4217Code(@NotNull String p02) {
            List<String> split$default;
            Intrinsics.checkNotNullParameter(p02, "");
            split$default = StringsKt__StringsKt.split$default(p02, new String[]{ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE}, false, 0, 6, null);
            if (split$default.size() == 4) {
                String str = null;
                String str2 = null;
                String str3 = null;
                Integer num = null;
                for (String str4 : split$default) {
                    if (x.o(str4, "label=", false)) {
                        str = getCurrencyIso4217Code(str4, "label=");
                    } else if (x.o(str4, "hashName=", false)) {
                        str2 = getCurrencyIso4217Code(str4, "hashName=");
                    } else if (!x.o(str4, "stackTrace=", false)) {
                        if (!x.o(str4, "c=", false)) {
                            break;
                        }
                        String substring = str4.substring(2);
                        Intrinsics.checkNotNullExpressionValue(substring, "");
                        num = Integer.valueOf(Integer.parseInt(StringsKt.b0(substring).toString()));
                    } else {
                        str3 = getCurrencyIso4217Code(str4, "stackTrace=");
                    }
                }
                if (!AFAdRevenueData(num, str, str2, str3)) {
                    Intrinsics.checkNotNull(str);
                    Intrinsics.checkNotNull(str2);
                    Intrinsics.checkNotNull(str3);
                    Intrinsics.checkNotNull(num);
                    return new AFc1cSDK(str, str2, str3, num.intValue());
                }
            }
            return null;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private static String getCurrencyIso4217Code(String str, String str2) {
            String substring = str.substring(str2.length());
            Intrinsics.checkNotNullExpressionValue(substring, "");
            String obj = StringsKt.b0(substring).toString();
            Intrinsics.checkNotNullParameter(obj, "");
            Charset charset = Charsets.UTF_8;
            byte[] bytes = obj.getBytes(charset);
            Intrinsics.checkNotNullExpressionValue(bytes, "");
            Intrinsics.checkNotNullParameter(bytes, "");
            byte[] decode = Base64.decode(bytes, 2);
            Intrinsics.checkNotNullExpressionValue(decode, "");
            return new String(decode, charset);
        }
    }

    public AFc1cSDK(@NotNull String str, @NotNull String str2, @NotNull String str3, int i5) {
        Intrinsics.checkNotNullParameter(str, "");
        Intrinsics.checkNotNullParameter(str2, "");
        Intrinsics.checkNotNullParameter(str3, "");
        this.getRevenue = str;
        this.getCurrencyIso4217Code = str2;
        this.getMediationNetwork = str3;
        this.getMonetizationNetwork = i5;
    }

    @NotNull
    public final JSONObject AFAdRevenueData() {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("label", this.getRevenue);
        jSONObject.put("hash_name", this.getCurrencyIso4217Code);
        jSONObject.put("st", this.getMediationNetwork);
        jSONObject.put("c", String.valueOf(this.getMonetizationNetwork));
        return jSONObject;
    }

    public final boolean equals(Object p02) {
        if (this == p02) {
            return true;
        }
        if (!(p02 instanceof AFc1cSDK)) {
            return false;
        }
        AFc1cSDK aFc1cSDK = (AFc1cSDK) p02;
        return Intrinsics.areEqual(this.getRevenue, aFc1cSDK.getRevenue) && Intrinsics.areEqual(this.getCurrencyIso4217Code, aFc1cSDK.getCurrencyIso4217Code) && Intrinsics.areEqual(this.getMediationNetwork, aFc1cSDK.getMediationNetwork) && this.getMonetizationNetwork == aFc1cSDK.getMonetizationNetwork;
    }

    @NotNull
    public final String getMediationNetwork() {
        String str = this.getRevenue;
        Intrinsics.checkNotNullParameter(str, "");
        Charset charset = Charsets.UTF_8;
        byte[] bytes = str.getBytes(charset);
        Intrinsics.checkNotNullExpressionValue(bytes, "");
        String encodeToString = Base64.encodeToString(bytes, 2);
        String str2 = this.getCurrencyIso4217Code;
        Intrinsics.checkNotNullParameter(str2, "");
        byte[] bytes2 = str2.getBytes(charset);
        Intrinsics.checkNotNullExpressionValue(bytes2, "");
        String encodeToString2 = Base64.encodeToString(bytes2, 2);
        String str3 = this.getMediationNetwork;
        Intrinsics.checkNotNullParameter(str3, "");
        byte[] bytes3 = str3.getBytes(charset);
        Intrinsics.checkNotNullExpressionValue(bytes3, "");
        String encodeToString3 = Base64.encodeToString(bytes3, 2);
        int i5 = this.getMonetizationNetwork;
        StringBuilder t5 = a3.e.t("label=", encodeToString, "\nhashName=", encodeToString2, "\nstackTrace=");
        t5.append(encodeToString3);
        t5.append("\nc=");
        t5.append(i5);
        return t5.toString();
    }

    public final int hashCode() {
        return Integer.hashCode(this.getMonetizationNetwork) + ((this.getMediationNetwork.hashCode() + ((this.getCurrencyIso4217Code.hashCode() + (this.getRevenue.hashCode() * 31)) * 31)) * 31);
    }

    @NotNull
    public final String toString() {
        String str = this.getRevenue;
        String str2 = this.getCurrencyIso4217Code;
        String str3 = this.getMediationNetwork;
        int i5 = this.getMonetizationNetwork;
        StringBuilder t5 = a3.e.t("ExceptionInfo(label=", str, ", hashName=", str2, ", stackTrace=");
        t5.append(str3);
        t5.append(", counter=");
        t5.append(i5);
        t5.append(")");
        return t5.toString();
    }

    public /* synthetic */ AFc1cSDK(String str, String str2, String str3, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, str3, (i6 & 8) != 0 ? 1 : i5);
    }
}
