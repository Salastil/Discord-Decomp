package com.appsflyer.internal;

import java.security.MessageDigest;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Charsets;
import kotlin.text.MatchGroup;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@SourceDebugExtension({"SMAP\nStringExtensions.kt\nKotlin\n*S Kotlin\n*F\n+ 1 StringExtensions.kt\ncom/appsflyer/internal/util/StringExtensionsKt\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,126:1\n13004#2,3:127\n*S KotlinDebug\n*F\n+ 1 StringExtensions.kt\ncom/appsflyer/internal/util/StringExtensionsKt\n*L\n54#1:127,3\n*E\n"})
/* loaded from: classes.dex */
public final class AFk1zSDK {
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

    public static final int getMediationNetwork(@NotNull String str) {
        String str2;
        Integer intOrNull;
        String str3;
        Integer intOrNull2;
        String str4;
        Integer intOrNull3;
        Intrinsics.checkNotNullParameter(str, "");
        kotlin.text.m c6 = new Regex("(\\d+).(\\d+).(\\d+).*").c(str);
        if (c6 == null) {
            return -1;
        }
        kotlin.collections.i iVar = c6.f13584c;
        MatchGroup b10 = iVar.b(1);
        int i5 = 0;
        int intValue = ((b10 == null || (str4 = b10.a) == null || (intOrNull3 = StringsKt.toIntOrNull(str4)) == null) ? 0 : intOrNull3.intValue()) * 1000000;
        MatchGroup b11 = iVar.b(2);
        int intValue2 = (((b11 == null || (str3 = b11.a) == null || (intOrNull2 = StringsKt.toIntOrNull(str3)) == null) ? 0 : intOrNull2.intValue()) * 1000) + intValue;
        MatchGroup b12 = iVar.b(3);
        if (b12 != null && (str2 = b12.a) != null && (intOrNull = StringsKt.toIntOrNull(str2)) != null) {
            i5 = intOrNull.intValue();
        }
        return intValue2 + i5;
    }
}
