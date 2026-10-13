package com.appsflyer.internal;

import java.security.MessageDigest;
import java.util.Arrays;
import kotlin.Pair;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Charsets;
import kotlin.text.MatchGroup;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@SourceDebugExtension({"SMAP\nStringExtensions.kt\nKotlin\n*S Kotlin\n*F\n+ 1 StringExtensions.kt\ncom/appsflyer/internal/components/monitorsdk/helpers/StringExtensionsKt\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,102:1\n13004#2,3:103\n*S KotlinDebug\n*F\n+ 1 StringExtensions.kt\ncom/appsflyer/internal/components/monitorsdk/helpers/StringExtensionsKt\n*L\n44#1:103,3\n*E\n"})
/* loaded from: classes.dex */
public final class AFd1rSDK {
    public static final String AFAdRevenueData(String str, String str2) {
        MessageDigest messageDigest = MessageDigest.getInstance(str2);
        byte[] bytes = str.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "");
        byte[] digest = messageDigest.digest(bytes);
        Intrinsics.checkNotNullExpressionValue(digest, "");
        String str3 = "";
        for (byte b10 : digest) {
            String format = String.format("%02x", Arrays.copyOf(new Object[]{Byte.valueOf(b10)}, 1));
            Intrinsics.checkNotNullExpressionValue(format, "");
            str3 = k0.d.k(str3, format);
        }
        return str3;
    }

    public static final Pair<Integer, Integer> getCurrencyIso4217Code(@NotNull String str) {
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        String str7;
        Intrinsics.checkNotNullParameter(str, "");
        kotlin.text.m c6 = new Regex("(\\d+).(\\d+).(\\d+)-(\\d+).(\\d+).(\\d+)").c(str);
        if (c6 != null) {
            kotlin.collections.i iVar = c6.f13584c;
            MatchGroup b10 = iVar.b(1);
            Integer intOrNull = (b10 == null || (str7 = b10.a) == null) ? null : StringsKt.toIntOrNull(str7);
            MatchGroup b11 = iVar.b(2);
            Integer intOrNull2 = (b11 == null || (str6 = b11.a) == null) ? null : StringsKt.toIntOrNull(str6);
            MatchGroup b12 = iVar.b(3);
            Integer intOrNull3 = (b12 == null || (str5 = b12.a) == null) ? null : StringsKt.toIntOrNull(str5);
            MatchGroup b13 = iVar.b(4);
            Integer intOrNull4 = (b13 == null || (str4 = b13.a) == null) ? null : StringsKt.toIntOrNull(str4);
            MatchGroup b14 = iVar.b(5);
            Integer intOrNull5 = (b14 == null || (str3 = b14.a) == null) ? null : StringsKt.toIntOrNull(str3);
            MatchGroup b15 = iVar.b(6);
            Integer intOrNull6 = (b15 == null || (str2 = b15.a) == null) ? null : StringsKt.toIntOrNull(str2);
            Integer num = intOrNull6;
            if (getMonetizationNetwork(intOrNull, intOrNull2, intOrNull3, intOrNull4, intOrNull5, intOrNull6)) {
                Intrinsics.checkNotNull(intOrNull);
                int intValue = intOrNull.intValue() * 1000000;
                Intrinsics.checkNotNull(intOrNull2);
                int intValue2 = (intOrNull2.intValue() * 1000) + intValue;
                Intrinsics.checkNotNull(intOrNull3);
                Integer valueOf = Integer.valueOf(intOrNull3.intValue() + intValue2);
                Intrinsics.checkNotNull(intOrNull4);
                int intValue3 = intOrNull4.intValue() * 1000000;
                Intrinsics.checkNotNull(intOrNull5);
                int intValue4 = (intOrNull5.intValue() * 1000) + intValue3;
                Intrinsics.checkNotNull(num);
                return new Pair<>(valueOf, Integer.valueOf(num.intValue() + intValue4));
            }
        }
        return null;
    }

    public static final Pair<Integer, Integer> getMonetizationNetwork(@NotNull String str) {
        String str2;
        String str3;
        String str4;
        Intrinsics.checkNotNullParameter(str, "");
        kotlin.text.m c6 = new Regex("^(\\d+).(\\+)$|^(\\d+).(\\d+).(\\+)$").c(str);
        if (c6 != null) {
            kotlin.collections.i iVar = c6.f13584c;
            MatchGroup b10 = iVar.b(1);
            Integer intOrNull = (b10 == null || (str4 = b10.a) == null) ? null : StringsKt.toIntOrNull(str4);
            MatchGroup b11 = iVar.b(3);
            Integer intOrNull2 = (b11 == null || (str3 = b11.a) == null) ? null : StringsKt.toIntOrNull(str3);
            MatchGroup b12 = iVar.b(4);
            Integer intOrNull3 = (b12 == null || (str2 = b12.a) == null) ? null : StringsKt.toIntOrNull(str2);
            if (intOrNull != null) {
                return new Pair<>(Integer.valueOf(intOrNull.intValue() * 1000000), Integer.valueOf(((intOrNull.intValue() + 1) * 1000000) - 1));
            }
            if (intOrNull2 != null && intOrNull3 != null) {
                return new Pair<>(Integer.valueOf((intOrNull3.intValue() * 1000) + (intOrNull2.intValue() * 1000000)), Integer.valueOf((((intOrNull3.intValue() + 1) * 1000) + (intOrNull2.intValue() * 1000000)) - 1));
            }
        }
        return null;
    }

    @NotNull
    public static final String getRevenue(@NotNull String str) {
        Intrinsics.checkNotNullParameter(str, "");
        return "[Exception Manager]: " + str;
    }

    private static boolean getMonetizationNetwork(@NotNull Object... objArr) {
        Intrinsics.checkNotNullParameter(objArr, "");
        return !x.p(null, objArr);
    }
}
