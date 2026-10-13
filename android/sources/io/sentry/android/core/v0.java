package io.sentry.android.core;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.os.Bundle;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.IScope;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.c4;
import io.sentry.f3;
import io.sentry.f6;
import io.sentry.g6;
import io.sentry.k4;
import io.sentry.o4;
import io.sentry.r3;
import io.sentry.r4;
import io.sentry.t3;
import io.sentry.u4;
import io.sentry.v5;
import io.sentry.w3;
import io.sentry.z3;
import io.sentry.z5;
import java.io.ByteArrayInputStream;
import java.io.File;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public abstract class v0 {
    public static void a(io.sentry.android.core.performance.g gVar, ArrayList arrayList) {
        long j = 0;
        if (gVar.f11298i == 0) {
            c4.f().l().getLogger().u(SentryLevel.WARNING, "Can not convert not-started TimeSpan to Map for Hybrid SDKs.", new Object[0]);
            return;
        }
        if (gVar.f11299v == 0) {
            c4.f().l().getLogger().u(SentryLevel.WARNING, "Can not convert not-stopped TimeSpan to Map for Hybrid SDKs.", new Object[0]);
            return;
        }
        HashMap hashMap = new HashMap();
        hashMap.put("description", gVar.f11296d);
        hashMap.put("start_timestamp_ms", Long.valueOf(gVar.f11297e));
        if (gVar.c()) {
            j = gVar.a() + gVar.f11297e;
        }
        hashMap.put("end_timestamp_ms", Long.valueOf(j));
        arrayList.add(hashMap);
    }

    /* JADX WARN: Removed duplicated region for block: B:105:0x04a5 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:115:0x04d7 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:125:0x04f1 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:133:0x0538 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:143:0x0552 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:153:0x058a A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:163:0x05a4 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:171:0x05cc A[Catch: all -> 0x0066, LOOP:5: B:169:0x05c6->B:171:0x05cc, LOOP_END, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:180:0x05ee A[Catch: all -> 0x0066, LOOP:6: B:178:0x05e8->B:180:0x05ee, LOOP_END, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:184:0x0303 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x012b A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:34:0x01fc A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x022e A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x026c A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0283 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:52:0x02aa A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:55:0x02e8 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0322 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0361 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:72:0x03de A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:77:0x03fd A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:82:0x0441 A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:95:0x048b A[Catch: all -> 0x0066, TryCatch #0 {all -> 0x0066, blocks: (B:3:0x0009, B:5:0x0012, B:8:0x0026, B:9:0x002a, B:11:0x0031, B:13:0x0044, B:15:0x005a, B:16:0x0069, B:18:0x008b, B:20:0x0095, B:21:0x009c, B:24:0x00db, B:28:0x00e4, B:29:0x00ff, B:31:0x012b, B:32:0x012e, B:34:0x01fc, B:35:0x0201, B:37:0x022e, B:39:0x0238, B:40:0x023f, B:42:0x026c, B:44:0x0276, B:45:0x027d, B:47:0x0283, B:49:0x028d, B:50:0x0294, B:52:0x02aa, B:53:0x02b5, B:55:0x02e8, B:56:0x02ef, B:59:0x02fb, B:60:0x0306, B:62:0x0322, B:63:0x0327, B:65:0x0361, B:66:0x0365, B:68:0x036b, B:70:0x0379, B:72:0x03de, B:74:0x03e8, B:75:0x03f3, B:77:0x03fd, B:79:0x0407, B:80:0x0412, B:82:0x0441, B:84:0x044f, B:85:0x0458, B:86:0x0460, B:88:0x046e, B:90:0x0476, B:92:0x047c, B:93:0x0485, B:95:0x048b, B:98:0x049b, B:103:0x049f, B:105:0x04a5, B:106:0x04ac, B:108:0x04ba, B:110:0x04c2, B:112:0x04c8, B:113:0x04d1, B:115:0x04d7, B:118:0x04e7, B:123:0x04eb, B:125:0x04f1, B:126:0x04f8, B:128:0x0521, B:130:0x0529, B:131:0x0532, B:133:0x0538, B:136:0x0548, B:141:0x054c, B:143:0x0552, B:144:0x0559, B:146:0x056d, B:148:0x0575, B:150:0x057b, B:151:0x0584, B:153:0x058a, B:156:0x059a, B:161:0x059e, B:163:0x05a4, B:164:0x05ab, B:166:0x05bc, B:168:0x05c2, B:169:0x05c6, B:171:0x05cc, B:173:0x05d6, B:175:0x05de, B:177:0x05e4, B:178:0x05e8, B:180:0x05ee, B:182:0x05f8, B:184:0x0303, B:185:0x00f2, B:186:0x0674, B:191:0x001b), top: B:2:0x0009 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void b(Context context, j0 j0Var, SentryAndroidOptions sentryAndroidOptions) {
        String j;
        String j5;
        long i5;
        List<String> h6;
        io.sentry.protocol.t sdkVersion;
        List h7;
        String j7;
        List h10;
        List h11;
        Iterator it;
        Iterator it2;
        List h12;
        ArrayList arrayList;
        Iterator it3;
        List h13;
        ArrayList arrayList2;
        Iterator it4;
        List h14;
        ArrayList arrayList3;
        Iterator it5;
        List h15;
        ArrayList arrayList4;
        Iterator it6;
        d9.a.L(sentryAndroidOptions, "The options object is required.");
        try {
            sentryAndroidOptions.getLogger();
            ApplicationInfo applicationInfo = Build.VERSION.SDK_INT >= 33 ? (ApplicationInfo) k0.f11261d.a(context) : (ApplicationInfo) k0.f11262e.a(context);
            Bundle bundle = applicationInfo != null ? applicationInfo.metaData : null;
            ILogger logger = sentryAndroidOptions.getLogger();
            if (bundle != null) {
                sentryAndroidOptions.setDebug(f(bundle, logger, "io.sentry.debug", sentryAndroidOptions.isDebug()));
                if (sentryAndroidOptions.isDebug()) {
                    String name = sentryAndroidOptions.getDiagnosticLevel().name();
                    Locale locale = Locale.ROOT;
                    String j10 = j(bundle, logger, "io.sentry.debug.level", name.toLowerCase(locale));
                    if (j10 != null) {
                        sentryAndroidOptions.setDiagnosticLevel(SentryLevel.valueOf(j10.toUpperCase(locale)));
                    }
                }
                sentryAndroidOptions.setAnrEnabled(f(bundle, logger, "io.sentry.anr.enable", sentryAndroidOptions.isAnrEnabled()));
                sentryAndroidOptions.setEnableAutoSessionTracking(f(bundle, logger, "io.sentry.auto-session-tracking.enable", sentryAndroidOptions.isEnableAutoSessionTracking()));
                if (sentryAndroidOptions.getSampleRate() == null) {
                    double g6 = g(bundle, logger, "io.sentry.sample-rate");
                    if (g6 != -1.0d) {
                        sentryAndroidOptions.setSampleRate(Double.valueOf(g6));
                    }
                }
                sentryAndroidOptions.setAnrReportInDebug(f(bundle, logger, "io.sentry.anr.report-debug", sentryAndroidOptions.isAnrReportInDebug()));
                sentryAndroidOptions.setAnrTimeoutIntervalMillis(i(bundle, logger, "io.sentry.anr.timeout-interval-millis", sentryAndroidOptions.getAnrTimeoutIntervalMillis()));
                sentryAndroidOptions.setAttachAnrThreadDump(f(bundle, logger, "io.sentry.anr.attach-thread-dumps", sentryAndroidOptions.isAttachAnrThreadDump()));
                String j11 = j(bundle, logger, "io.sentry.dsn", sentryAndroidOptions.getDsn());
                boolean f2 = f(bundle, logger, "io.sentry.enabled", sentryAndroidOptions.isEnabled());
                if (f2 && (j11 == null || !j11.isEmpty())) {
                    if (j11 == null) {
                        sentryAndroidOptions.getLogger().u(SentryLevel.FATAL, "DSN is required. Use empty string to disable SDK.", new Object[0]);
                    }
                    sentryAndroidOptions.setEnabled(f2);
                    sentryAndroidOptions.setDsn(j11);
                    sentryAndroidOptions.setEnableNdk(f(bundle, logger, "io.sentry.ndk.enable", sentryAndroidOptions.isEnableNdk()));
                    sentryAndroidOptions.setEnableScopeSync(f(bundle, logger, "io.sentry.ndk.scope-sync.enable", sentryAndroidOptions.isEnableScopeSync()));
                    j = j(bundle, logger, "io.sentry.ndk.sdk-name", sentryAndroidOptions.getNativeSdkName());
                    if (j != null) {
                        sentryAndroidOptions.setNativeSdkName(j);
                    }
                    sentryAndroidOptions.setRelease(j(bundle, logger, "io.sentry.release", sentryAndroidOptions.getRelease()));
                    sentryAndroidOptions.setEnvironment(j(bundle, logger, "io.sentry.environment", sentryAndroidOptions.getEnvironment()));
                    sentryAndroidOptions.setSessionTrackingIntervalMillis(i(bundle, logger, "io.sentry.session-tracking.timeout-interval-millis", sentryAndroidOptions.getSessionTrackingIntervalMillis()));
                    sentryAndroidOptions.setMaxBreadcrumbs((int) i(bundle, logger, "io.sentry.max-breadcrumbs", sentryAndroidOptions.getMaxBreadcrumbs()));
                    sentryAndroidOptions.setEnableActivityLifecycleBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.activity-lifecycle", sentryAndroidOptions.isEnableActivityLifecycleBreadcrumbs()));
                    sentryAndroidOptions.setEnableAppLifecycleBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.app-lifecycle", sentryAndroidOptions.isEnableAppLifecycleBreadcrumbs()));
                    sentryAndroidOptions.setEnableSystemEventBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.system-events", sentryAndroidOptions.isEnableSystemEventBreadcrumbs()));
                    sentryAndroidOptions.setEnableAppComponentBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.app-components", sentryAndroidOptions.isEnableAppComponentBreadcrumbs()));
                    sentryAndroidOptions.setEnableUserInteractionBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.user-interaction", sentryAndroidOptions.isEnableUserInteractionBreadcrumbs()));
                    sentryAndroidOptions.setEnableNetworkEventBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.network-events", sentryAndroidOptions.isEnableNetworkEventBreadcrumbs()));
                    sentryAndroidOptions.setEnableUncaughtExceptionHandler(f(bundle, logger, "io.sentry.uncaught-exception-handler.enable", sentryAndroidOptions.isEnableUncaughtExceptionHandler()));
                    sentryAndroidOptions.setAttachThreads(f(bundle, logger, "io.sentry.attach-threads", sentryAndroidOptions.isAttachThreads()));
                    sentryAndroidOptions.setAttachScreenshot(f(bundle, logger, "io.sentry.attach-screenshot", sentryAndroidOptions.isAttachScreenshot()));
                    sentryAndroidOptions.setAttachViewHierarchy(f(bundle, logger, "io.sentry.attach-view-hierarchy", sentryAndroidOptions.isAttachViewHierarchy()));
                    sentryAndroidOptions.setSendClientReports(f(bundle, logger, "io.sentry.send-client-reports", sentryAndroidOptions.isSendClientReports()));
                    if (f(bundle, logger, "io.sentry.auto-init", true)) {
                        sentryAndroidOptions.setInitPriority(io.sentry.j1.LOW);
                    }
                    sentryAndroidOptions.setForceInit(f(bundle, logger, "io.sentry.force-init", sentryAndroidOptions.isForceInit()));
                    sentryAndroidOptions.setCollectAdditionalContext(f(bundle, logger, "io.sentry.additional-context", sentryAndroidOptions.isCollectAdditionalContext()));
                    sentryAndroidOptions.setCollectExternalStorageContext(f(bundle, logger, "io.sentry.external-storage-context", sentryAndroidOptions.isCollectExternalStorageContext()));
                    if (sentryAndroidOptions.getTracesSampleRate() == null) {
                        double g10 = g(bundle, logger, "io.sentry.traces.sample-rate");
                        if (g10 != -1.0d) {
                            sentryAndroidOptions.setTracesSampleRate(Double.valueOf(g10));
                        }
                    }
                    sentryAndroidOptions.setTraceSampling(f(bundle, logger, "io.sentry.traces.trace-sampling", sentryAndroidOptions.isTraceSampling()));
                    sentryAndroidOptions.setEnableAutoActivityLifecycleTracing(f(bundle, logger, "io.sentry.traces.activity.enable", sentryAndroidOptions.isEnableAutoActivityLifecycleTracing()));
                    sentryAndroidOptions.setEnableActivityLifecycleTracingAutoFinish(f(bundle, logger, "io.sentry.traces.activity.auto-finish.enable", sentryAndroidOptions.isEnableActivityLifecycleTracingAutoFinish()));
                    if (sentryAndroidOptions.getProfilesSampleRate() == null) {
                        double g11 = g(bundle, logger, "io.sentry.traces.profiling.sample-rate");
                        if (g11 != -1.0d) {
                            sentryAndroidOptions.setProfilesSampleRate(Double.valueOf(g11));
                        }
                    }
                    if (sentryAndroidOptions.getProfileSessionSampleRate() == null) {
                        double g12 = g(bundle, logger, "io.sentry.traces.profiling.session-sample-rate");
                        if (g12 != -1.0d) {
                            sentryAndroidOptions.setProfileSessionSampleRate(Double.valueOf(g12));
                        }
                    }
                    String name2 = sentryAndroidOptions.getProfileLifecycle().name();
                    Locale locale2 = Locale.ROOT;
                    j5 = j(bundle, logger, "io.sentry.traces.profiling.lifecycle", name2.toLowerCase(locale2));
                    if (j5 != null) {
                        sentryAndroidOptions.setProfileLifecycle(f3.valueOf(j5.toUpperCase(locale2)));
                    }
                    sentryAndroidOptions.setStartProfilerOnAppStart(f(bundle, logger, "io.sentry.traces.profiling.start-on-app-start", sentryAndroidOptions.isStartProfilerOnAppStart()));
                    sentryAndroidOptions.setEnableUserInteractionTracing(f(bundle, logger, "io.sentry.traces.user-interaction.enable", sentryAndroidOptions.isEnableUserInteractionTracing()));
                    sentryAndroidOptions.setEnableTimeToFullDisplayTracing(f(bundle, logger, "io.sentry.traces.time-to-full-display.enable", sentryAndroidOptions.isEnableTimeToFullDisplayTracing()));
                    i5 = i(bundle, logger, "io.sentry.traces.idle-timeout", -1L);
                    if (i5 != -1) {
                        sentryAndroidOptions.setIdleTimeout(Long.valueOf(i5));
                    }
                    h6 = h(bundle, logger, "io.sentry.traces.trace-propagation-targets");
                    if (!bundle.containsKey("io.sentry.traces.trace-propagation-targets") && h6 == null) {
                        sentryAndroidOptions.setTracePropagationTargets(Collections.EMPTY_LIST);
                    } else if (h6 != null) {
                        sentryAndroidOptions.setTracePropagationTargets(h6);
                    }
                    sentryAndroidOptions.setEnableFramesTracking(f(bundle, logger, "io.sentry.traces.frames-tracking", true));
                    sentryAndroidOptions.setProguardUuid(j(bundle, logger, "io.sentry.proguard-uuid", sentryAndroidOptions.getProguardUuid()));
                    sdkVersion = sentryAndroidOptions.getSdkVersion();
                    if (sdkVersion == null) {
                        sdkVersion = new io.sentry.protocol.t("", "");
                    }
                    String k = k(bundle, logger, "io.sentry.sdk.name", sdkVersion.a());
                    d9.a.L(k, "name is required.");
                    sdkVersion.f11883d = k;
                    String k5 = k(bundle, logger, "io.sentry.sdk.version", sdkVersion.b());
                    d9.a.L(k5, "version is required.");
                    sdkVersion.f11884e = k5;
                    sentryAndroidOptions.setSdkVersion(sdkVersion);
                    sentryAndroidOptions.setSendDefaultPii(f(bundle, logger, "io.sentry.send-default-pii", sentryAndroidOptions.isSendDefaultPii()));
                    h7 = h(bundle, logger, "io.sentry.gradle-plugin-integrations");
                    if (h7 != null) {
                        Iterator it7 = h7.iterator();
                        while (it7.hasNext()) {
                            u4.d().a((String) it7.next());
                        }
                    }
                    sentryAndroidOptions.setEnableRootCheck(f(bundle, logger, "io.sentry.enable-root-check", sentryAndroidOptions.isEnableRootCheck()));
                    sentryAndroidOptions.setSendModules(f(bundle, logger, "io.sentry.send-modules", sentryAndroidOptions.isSendModules()));
                    sentryAndroidOptions.setEnablePerformanceV2(f(bundle, logger, "io.sentry.performance-v2.enable", sentryAndroidOptions.isEnablePerformanceV2()));
                    sentryAndroidOptions.setEnableAppStartProfiling(f(bundle, logger, "io.sentry.profiling.enable-app-start", sentryAndroidOptions.isEnableAppStartProfiling()));
                    sentryAndroidOptions.setEnableScopePersistence(f(bundle, logger, "io.sentry.enable-scope-persistence", sentryAndroidOptions.isEnableScopePersistence()));
                    sentryAndroidOptions.setEnableAutoTraceIdGeneration(f(bundle, logger, "io.sentry.traces.enable-auto-id-generation", sentryAndroidOptions.isEnableAutoTraceIdGeneration()));
                    sentryAndroidOptions.setDeadlineTimeout(i(bundle, logger, "io.sentry.traces.deadline-timeout", sentryAndroidOptions.getDeadlineTimeout()));
                    if (sentryAndroidOptions.getSessionReplay().f() == null) {
                        double g13 = g(bundle, logger, "io.sentry.session-replay.session-sample-rate");
                        if (g13 != -1.0d) {
                            sentryAndroidOptions.getSessionReplay().q(Double.valueOf(g13));
                        }
                    }
                    if (sentryAndroidOptions.getSessionReplay().e() == null) {
                        double g14 = g(bundle, logger, "io.sentry.session-replay.on-error-sample-rate");
                        if (g14 != -1.0d) {
                            sentryAndroidOptions.getSessionReplay().p(Double.valueOf(g14));
                        }
                    }
                    sentryAndroidOptions.getSessionReplay().j(f(bundle, logger, "io.sentry.session-replay.mask-all-text", true));
                    sentryAndroidOptions.getSessionReplay().i(f(bundle, logger, "io.sentry.session-replay.mask-all-images", true));
                    sentryAndroidOptions.getSessionReplay().h(f(bundle, logger, "io.sentry.session-replay.debug", false));
                    j7 = j(bundle, logger, "io.sentry.session-replay.screenshot-strategy", null);
                    if (j7 != null) {
                        if ("canvas".equals(j7.toLowerCase(Locale.ROOT))) {
                            sentryAndroidOptions.getSessionReplay().f12114o = w3.CANVAS;
                        } else {
                            sentryAndroidOptions.getSessionReplay().f12114o = w3.PIXEL_COPY;
                        }
                    }
                    if (sentryAndroidOptions.getSessionReplay().a().isEmpty() && (h15 = h(bundle, logger, "io.sentry.session-replay.network-detail-allow-urls")) != null && !h15.isEmpty()) {
                        arrayList4 = new ArrayList();
                        it6 = h15.iterator();
                        while (it6.hasNext()) {
                            String trim = ((String) it6.next()).trim();
                            if (!trim.isEmpty()) {
                                arrayList4.add(trim);
                            }
                        }
                        if (!arrayList4.isEmpty()) {
                            sentryAndroidOptions.getSessionReplay().l(arrayList4);
                        }
                    }
                    if (sentryAndroidOptions.getSessionReplay().b().isEmpty() && (h14 = h(bundle, logger, "io.sentry.session-replay.network-detail-deny-urls")) != null && !h14.isEmpty()) {
                        arrayList3 = new ArrayList();
                        it5 = h14.iterator();
                        while (it5.hasNext()) {
                            String trim2 = ((String) it5.next()).trim();
                            if (!trim2.isEmpty()) {
                                arrayList3.add(trim2);
                            }
                        }
                        if (!arrayList3.isEmpty()) {
                            sentryAndroidOptions.getSessionReplay().m(arrayList3);
                        }
                    }
                    sentryAndroidOptions.getSessionReplay().k(f(bundle, logger, "io.sentry.session-replay.network-capture-bodies", sentryAndroidOptions.getSessionReplay().g()));
                    if (sentryAndroidOptions.getSessionReplay().c().size() == z5.f12102u.size() && (h13 = h(bundle, logger, "io.sentry.session-replay.network-request-headers")) != null) {
                        arrayList2 = new ArrayList();
                        it4 = h13.iterator();
                        while (it4.hasNext()) {
                            String trim3 = ((String) it4.next()).trim();
                            if (!trim3.isEmpty()) {
                                arrayList2.add(trim3);
                            }
                        }
                        if (!arrayList2.isEmpty()) {
                            sentryAndroidOptions.getSessionReplay().n(arrayList2);
                        }
                    }
                    if (sentryAndroidOptions.getSessionReplay().d().size() == z5.f12102u.size() && (h12 = h(bundle, logger, "io.sentry.session-replay.network-response-headers")) != null && !h12.isEmpty()) {
                        arrayList = new ArrayList();
                        it3 = h12.iterator();
                        while (it3.hasNext()) {
                            String trim4 = ((String) it3.next()).trim();
                            if (!trim4.isEmpty()) {
                                arrayList.add(trim4);
                            }
                        }
                        if (!arrayList.isEmpty()) {
                            sentryAndroidOptions.getSessionReplay().o(arrayList);
                        }
                    }
                    sentryAndroidOptions.setIgnoredErrors(h(bundle, logger, "io.sentry.ignored-errors"));
                    h10 = h(bundle, logger, "io.sentry.in-app-includes");
                    if (h10 != null && !h10.isEmpty()) {
                        it2 = h10.iterator();
                        while (it2.hasNext()) {
                            sentryAndroidOptions.addInAppInclude((String) it2.next());
                        }
                    }
                    h11 = h(bundle, logger, "io.sentry.in-app-excludes");
                    if (h11 != null && !h11.isEmpty()) {
                        it = h11.iterator();
                        while (it.hasNext()) {
                            sentryAndroidOptions.addInAppExclude((String) it.next());
                        }
                    }
                    sentryAndroidOptions.getLogs().b(f(bundle, logger, "io.sentry.logs.enabled", sentryAndroidOptions.getLogs().a()));
                    sentryAndroidOptions.getMetrics().b(f(bundle, logger, "io.sentry.metrics.enabled", sentryAndroidOptions.getMetrics().a()));
                    r4 feedbackOptions = sentryAndroidOptions.getFeedbackOptions();
                    feedbackOptions.h(f(bundle, logger, "io.sentry.feedback.is-name-required", feedbackOptions.b()));
                    feedbackOptions.k(f(bundle, logger, "io.sentry.feedback.show-name", feedbackOptions.e()));
                    feedbackOptions.g(f(bundle, logger, "io.sentry.feedback.is-email-required", feedbackOptions.a()));
                    feedbackOptions.j(f(bundle, logger, "io.sentry.feedback.show-email", feedbackOptions.d()));
                    feedbackOptions.l(f(bundle, logger, "io.sentry.feedback.use-sentry-user", feedbackOptions.f()));
                    feedbackOptions.i(f(bundle, logger, "io.sentry.feedback.show-branding", feedbackOptions.c()));
                }
                sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Sentry enabled flag set to false or DSN is empty: disabling sentry-android", new Object[0]);
                sentryAndroidOptions.setEnabled(f2);
                sentryAndroidOptions.setDsn(j11);
                sentryAndroidOptions.setEnableNdk(f(bundle, logger, "io.sentry.ndk.enable", sentryAndroidOptions.isEnableNdk()));
                sentryAndroidOptions.setEnableScopeSync(f(bundle, logger, "io.sentry.ndk.scope-sync.enable", sentryAndroidOptions.isEnableScopeSync()));
                j = j(bundle, logger, "io.sentry.ndk.sdk-name", sentryAndroidOptions.getNativeSdkName());
                if (j != null) {
                }
                sentryAndroidOptions.setRelease(j(bundle, logger, "io.sentry.release", sentryAndroidOptions.getRelease()));
                sentryAndroidOptions.setEnvironment(j(bundle, logger, "io.sentry.environment", sentryAndroidOptions.getEnvironment()));
                sentryAndroidOptions.setSessionTrackingIntervalMillis(i(bundle, logger, "io.sentry.session-tracking.timeout-interval-millis", sentryAndroidOptions.getSessionTrackingIntervalMillis()));
                sentryAndroidOptions.setMaxBreadcrumbs((int) i(bundle, logger, "io.sentry.max-breadcrumbs", sentryAndroidOptions.getMaxBreadcrumbs()));
                sentryAndroidOptions.setEnableActivityLifecycleBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.activity-lifecycle", sentryAndroidOptions.isEnableActivityLifecycleBreadcrumbs()));
                sentryAndroidOptions.setEnableAppLifecycleBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.app-lifecycle", sentryAndroidOptions.isEnableAppLifecycleBreadcrumbs()));
                sentryAndroidOptions.setEnableSystemEventBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.system-events", sentryAndroidOptions.isEnableSystemEventBreadcrumbs()));
                sentryAndroidOptions.setEnableAppComponentBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.app-components", sentryAndroidOptions.isEnableAppComponentBreadcrumbs()));
                sentryAndroidOptions.setEnableUserInteractionBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.user-interaction", sentryAndroidOptions.isEnableUserInteractionBreadcrumbs()));
                sentryAndroidOptions.setEnableNetworkEventBreadcrumbs(f(bundle, logger, "io.sentry.breadcrumbs.network-events", sentryAndroidOptions.isEnableNetworkEventBreadcrumbs()));
                sentryAndroidOptions.setEnableUncaughtExceptionHandler(f(bundle, logger, "io.sentry.uncaught-exception-handler.enable", sentryAndroidOptions.isEnableUncaughtExceptionHandler()));
                sentryAndroidOptions.setAttachThreads(f(bundle, logger, "io.sentry.attach-threads", sentryAndroidOptions.isAttachThreads()));
                sentryAndroidOptions.setAttachScreenshot(f(bundle, logger, "io.sentry.attach-screenshot", sentryAndroidOptions.isAttachScreenshot()));
                sentryAndroidOptions.setAttachViewHierarchy(f(bundle, logger, "io.sentry.attach-view-hierarchy", sentryAndroidOptions.isAttachViewHierarchy()));
                sentryAndroidOptions.setSendClientReports(f(bundle, logger, "io.sentry.send-client-reports", sentryAndroidOptions.isSendClientReports()));
                if (f(bundle, logger, "io.sentry.auto-init", true)) {
                }
                sentryAndroidOptions.setForceInit(f(bundle, logger, "io.sentry.force-init", sentryAndroidOptions.isForceInit()));
                sentryAndroidOptions.setCollectAdditionalContext(f(bundle, logger, "io.sentry.additional-context", sentryAndroidOptions.isCollectAdditionalContext()));
                sentryAndroidOptions.setCollectExternalStorageContext(f(bundle, logger, "io.sentry.external-storage-context", sentryAndroidOptions.isCollectExternalStorageContext()));
                if (sentryAndroidOptions.getTracesSampleRate() == null) {
                }
                sentryAndroidOptions.setTraceSampling(f(bundle, logger, "io.sentry.traces.trace-sampling", sentryAndroidOptions.isTraceSampling()));
                sentryAndroidOptions.setEnableAutoActivityLifecycleTracing(f(bundle, logger, "io.sentry.traces.activity.enable", sentryAndroidOptions.isEnableAutoActivityLifecycleTracing()));
                sentryAndroidOptions.setEnableActivityLifecycleTracingAutoFinish(f(bundle, logger, "io.sentry.traces.activity.auto-finish.enable", sentryAndroidOptions.isEnableActivityLifecycleTracingAutoFinish()));
                if (sentryAndroidOptions.getProfilesSampleRate() == null) {
                }
                if (sentryAndroidOptions.getProfileSessionSampleRate() == null) {
                }
                String name22 = sentryAndroidOptions.getProfileLifecycle().name();
                Locale locale22 = Locale.ROOT;
                j5 = j(bundle, logger, "io.sentry.traces.profiling.lifecycle", name22.toLowerCase(locale22));
                if (j5 != null) {
                }
                sentryAndroidOptions.setStartProfilerOnAppStart(f(bundle, logger, "io.sentry.traces.profiling.start-on-app-start", sentryAndroidOptions.isStartProfilerOnAppStart()));
                sentryAndroidOptions.setEnableUserInteractionTracing(f(bundle, logger, "io.sentry.traces.user-interaction.enable", sentryAndroidOptions.isEnableUserInteractionTracing()));
                sentryAndroidOptions.setEnableTimeToFullDisplayTracing(f(bundle, logger, "io.sentry.traces.time-to-full-display.enable", sentryAndroidOptions.isEnableTimeToFullDisplayTracing()));
                i5 = i(bundle, logger, "io.sentry.traces.idle-timeout", -1L);
                if (i5 != -1) {
                }
                h6 = h(bundle, logger, "io.sentry.traces.trace-propagation-targets");
                if (!bundle.containsKey("io.sentry.traces.trace-propagation-targets")) {
                }
                if (h6 != null) {
                }
                sentryAndroidOptions.setEnableFramesTracking(f(bundle, logger, "io.sentry.traces.frames-tracking", true));
                sentryAndroidOptions.setProguardUuid(j(bundle, logger, "io.sentry.proguard-uuid", sentryAndroidOptions.getProguardUuid()));
                sdkVersion = sentryAndroidOptions.getSdkVersion();
                if (sdkVersion == null) {
                }
                String k7 = k(bundle, logger, "io.sentry.sdk.name", sdkVersion.a());
                d9.a.L(k7, "name is required.");
                sdkVersion.f11883d = k7;
                String k52 = k(bundle, logger, "io.sentry.sdk.version", sdkVersion.b());
                d9.a.L(k52, "version is required.");
                sdkVersion.f11884e = k52;
                sentryAndroidOptions.setSdkVersion(sdkVersion);
                sentryAndroidOptions.setSendDefaultPii(f(bundle, logger, "io.sentry.send-default-pii", sentryAndroidOptions.isSendDefaultPii()));
                h7 = h(bundle, logger, "io.sentry.gradle-plugin-integrations");
                if (h7 != null) {
                }
                sentryAndroidOptions.setEnableRootCheck(f(bundle, logger, "io.sentry.enable-root-check", sentryAndroidOptions.isEnableRootCheck()));
                sentryAndroidOptions.setSendModules(f(bundle, logger, "io.sentry.send-modules", sentryAndroidOptions.isSendModules()));
                sentryAndroidOptions.setEnablePerformanceV2(f(bundle, logger, "io.sentry.performance-v2.enable", sentryAndroidOptions.isEnablePerformanceV2()));
                sentryAndroidOptions.setEnableAppStartProfiling(f(bundle, logger, "io.sentry.profiling.enable-app-start", sentryAndroidOptions.isEnableAppStartProfiling()));
                sentryAndroidOptions.setEnableScopePersistence(f(bundle, logger, "io.sentry.enable-scope-persistence", sentryAndroidOptions.isEnableScopePersistence()));
                sentryAndroidOptions.setEnableAutoTraceIdGeneration(f(bundle, logger, "io.sentry.traces.enable-auto-id-generation", sentryAndroidOptions.isEnableAutoTraceIdGeneration()));
                sentryAndroidOptions.setDeadlineTimeout(i(bundle, logger, "io.sentry.traces.deadline-timeout", sentryAndroidOptions.getDeadlineTimeout()));
                if (sentryAndroidOptions.getSessionReplay().f() == null) {
                }
                if (sentryAndroidOptions.getSessionReplay().e() == null) {
                }
                sentryAndroidOptions.getSessionReplay().j(f(bundle, logger, "io.sentry.session-replay.mask-all-text", true));
                sentryAndroidOptions.getSessionReplay().i(f(bundle, logger, "io.sentry.session-replay.mask-all-images", true));
                sentryAndroidOptions.getSessionReplay().h(f(bundle, logger, "io.sentry.session-replay.debug", false));
                j7 = j(bundle, logger, "io.sentry.session-replay.screenshot-strategy", null);
                if (j7 != null) {
                }
                if (sentryAndroidOptions.getSessionReplay().a().isEmpty()) {
                    arrayList4 = new ArrayList();
                    it6 = h15.iterator();
                    while (it6.hasNext()) {
                    }
                    if (!arrayList4.isEmpty()) {
                    }
                }
                if (sentryAndroidOptions.getSessionReplay().b().isEmpty()) {
                    arrayList3 = new ArrayList();
                    it5 = h14.iterator();
                    while (it5.hasNext()) {
                    }
                    if (!arrayList3.isEmpty()) {
                    }
                }
                sentryAndroidOptions.getSessionReplay().k(f(bundle, logger, "io.sentry.session-replay.network-capture-bodies", sentryAndroidOptions.getSessionReplay().g()));
                if (sentryAndroidOptions.getSessionReplay().c().size() == z5.f12102u.size()) {
                    arrayList2 = new ArrayList();
                    it4 = h13.iterator();
                    while (it4.hasNext()) {
                    }
                    if (!arrayList2.isEmpty()) {
                    }
                }
                if (sentryAndroidOptions.getSessionReplay().d().size() == z5.f12102u.size()) {
                    arrayList = new ArrayList();
                    it3 = h12.iterator();
                    while (it3.hasNext()) {
                    }
                    if (!arrayList.isEmpty()) {
                    }
                }
                sentryAndroidOptions.setIgnoredErrors(h(bundle, logger, "io.sentry.ignored-errors"));
                h10 = h(bundle, logger, "io.sentry.in-app-includes");
                if (h10 != null) {
                    it2 = h10.iterator();
                    while (it2.hasNext()) {
                    }
                }
                h11 = h(bundle, logger, "io.sentry.in-app-excludes");
                if (h11 != null) {
                    it = h11.iterator();
                    while (it.hasNext()) {
                    }
                }
                sentryAndroidOptions.getLogs().b(f(bundle, logger, "io.sentry.logs.enabled", sentryAndroidOptions.getLogs().a()));
                sentryAndroidOptions.getMetrics().b(f(bundle, logger, "io.sentry.metrics.enabled", sentryAndroidOptions.getMetrics().a()));
                r4 feedbackOptions2 = sentryAndroidOptions.getFeedbackOptions();
                feedbackOptions2.h(f(bundle, logger, "io.sentry.feedback.is-name-required", feedbackOptions2.b()));
                feedbackOptions2.k(f(bundle, logger, "io.sentry.feedback.show-name", feedbackOptions2.e()));
                feedbackOptions2.g(f(bundle, logger, "io.sentry.feedback.is-email-required", feedbackOptions2.a()));
                feedbackOptions2.j(f(bundle, logger, "io.sentry.feedback.show-email", feedbackOptions2.d()));
                feedbackOptions2.l(f(bundle, logger, "io.sentry.feedback.use-sentry-user", feedbackOptions2.f()));
                feedbackOptions2.i(f(bundle, logger, "io.sentry.feedback.show-branding", feedbackOptions2.c()));
            }
            sentryAndroidOptions.getLogger().u(SentryLevel.INFO, "Retrieving configuration from AndroidManifest.xml", new Object[0]);
        } catch (Throwable th2) {
            sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Failed to read configuration from android manifest metadata.", th2);
        }
    }

    public static void c(byte[] bArr, boolean z5) {
        final v5 l6 = c4.f().l();
        try {
            ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bArr);
            try {
                io.sentry.c1 serializer = l6.getSerializer();
                io.sentry.internal.debugmeta.c a = l6.getEnvelopeReader().a(byteArrayInputStream);
                if (a == null) {
                    byteArrayInputStream.close();
                    return;
                }
                ArrayList arrayList = new ArrayList();
                final boolean z6 = false;
                final f6 f6Var = null;
                for (o4 o4Var : (Iterable) a.f11623i) {
                    arrayList.add(o4Var);
                    SentryEvent g6 = o4Var.g(serializer);
                    if (g6 != null) {
                        if (g6.e() != null) {
                            f6Var = f6.Crashed;
                        }
                        if ((g6.e() != null) || g6.f()) {
                            z6 = true;
                        }
                    }
                }
                final AtomicReference atomicReference = new AtomicReference();
                c4.d(null, new r3() { // from class: io.sentry.android.core.u0
                    @Override // io.sentry.r3
                    public final void h(IScope iScope) {
                        g6 v5 = iScope.v();
                        if (v5 == null) {
                            l6.getLogger().u(SentryLevel.INFO, "Session is null on updateSession", new Object[0]);
                        } else if (v5.d(f6.this, null, z6, null)) {
                            if (v5.f11573y == f6.Crashed) {
                                v5.b(ki.b.r());
                                iScope.K();
                            }
                            atomicReference.set(v5);
                        }
                    }
                });
                g6 g6Var = (g6) atomicReference.get();
                if (g6Var != null) {
                    arrayList.add(o4.d(serializer, g6Var));
                    if (z5 && c4.f().l().getThreadChecker().c()) {
                        try {
                            l6.getExecutorService().submit(new z3(l6, 4));
                        } catch (Throwable th2) {
                            l6.getLogger().k(SentryLevel.WARNING, "Submission of deletion of the current session file rejected.", th2);
                        }
                    } else {
                        d(l6);
                    }
                    if (z5) {
                        c4.f().p();
                    }
                }
                c4.f().h(new io.sentry.internal.debugmeta.c((k4) a.f11622e, arrayList), new Hint());
                byteArrayInputStream.close();
            } finally {
            }
        } catch (Throwable th3) {
            l6.getLogger().k(SentryLevel.ERROR, "Failed to capture envelope", th3);
        }
    }

    public static void d(v5 v5Var) {
        String cacheDirPath = v5Var.getCacheDirPath();
        if (cacheDirPath == null) {
            v5Var.getLogger().u(SentryLevel.INFO, "Cache dir is not set, not deleting the current session.", new Object[0]);
            return;
        }
        if (!v5Var.isEnableAutoSessionTracking()) {
            v5Var.getLogger().u(SentryLevel.DEBUG, "Session tracking is disabled, bailing from deleting current session file.", new Object[0]);
            return;
        }
        int i5 = io.sentry.cache.c.G;
        if (new File(cacheDirPath, "session.json").delete()) {
            return;
        }
        v5Var.getLogger().u(SentryLevel.WARNING, "Failed to delete the current session file.", new Object[0]);
    }

    public static IScope e() {
        AtomicReference atomicReference = new AtomicReference();
        c4.d(t3.COMBINED, new hc.m(14, atomicReference));
        return (IScope) atomicReference.get();
    }

    public static boolean f(Bundle bundle, ILogger iLogger, String str, boolean z5) {
        boolean z6 = bundle.getBoolean(str, z5);
        iLogger.u(SentryLevel.DEBUG, str + " read: " + z6, new Object[0]);
        return z6;
    }

    public static double g(Bundle bundle, ILogger iLogger, String str) {
        double doubleValue = Float.valueOf(bundle.getFloat(str, -1.0f)).doubleValue();
        if (doubleValue == -1.0d) {
            doubleValue = Integer.valueOf(bundle.getInt(str, -1)).doubleValue();
        }
        iLogger.u(SentryLevel.DEBUG, str + " read: " + doubleValue, new Object[0]);
        return doubleValue;
    }

    public static List h(Bundle bundle, ILogger iLogger, String str) {
        String string = bundle.getString(str);
        iLogger.u(SentryLevel.DEBUG, k0.d.l(str, " read: ", string), new Object[0]);
        if (string != null) {
            return Arrays.asList(string.split(",", -1));
        }
        return null;
    }

    public static long i(Bundle bundle, ILogger iLogger, String str, long j) {
        long j5 = bundle.getInt(str, (int) j);
        iLogger.u(SentryLevel.DEBUG, str + " read: " + j5, new Object[0]);
        return j5;
    }

    public static String j(Bundle bundle, ILogger iLogger, String str, String str2) {
        String string = bundle.getString(str, str2);
        iLogger.u(SentryLevel.DEBUG, k0.d.l(str, " read: ", string), new Object[0]);
        return string;
    }

    public static String k(Bundle bundle, ILogger iLogger, String str, String str2) {
        String string = bundle.getString(str, str2);
        iLogger.u(SentryLevel.DEBUG, k0.d.l(str, " read: ", string), new Object[0]);
        return string;
    }

    public static HashMap l(Context context, SentryAndroidOptions sentryAndroidOptions, IScope iScope) {
        HashMap hashMap = new HashMap();
        if (iScope != null) {
            try {
                ILogger logger = sentryAndroidOptions.getLogger();
                ve.i iVar = new ve.i(hashMap);
                ArrayDeque arrayDeque = (ArrayDeque) iVar.f19405d;
                o0 c6 = o0.c(context, sentryAndroidOptions);
                iScope.J().p(c6.a(true, true));
                iScope.J().s(c6.f11277g);
                io.sentry.protocol.h0 Q = iScope.Q();
                if (Q == null) {
                    Q = new io.sentry.protocol.h0();
                    iScope.m(Q);
                }
                if (Q.f11797e == null) {
                    try {
                        Q.f11797e = (String) sentryAndroidOptions.getRuntimeManager().i(new com.discord.chat.input.views.d(context, 7));
                    } catch (RuntimeException e9) {
                        logger.k(SentryLevel.ERROR, "Could not retrieve installation ID", e9);
                    }
                }
                io.sentry.protocol.a d6 = iScope.J().d();
                if (d6 == null) {
                    d6 = new io.sentry.protocol.a();
                }
                d6.f11752w = (String) k0.f11260c.a(context);
                io.sentry.android.core.performance.g a = io.sentry.android.core.performance.f.b().a(sentryAndroidOptions);
                if (a.c()) {
                    d6.f11749e = a.b() == null ? null : ki.b.s(Double.valueOf(r6.f11013d / 1000000.0d).longValue());
                }
                j0 j0Var = new j0(sentryAndroidOptions.getLogger());
                PackageInfo f2 = k0.f(context, sentryAndroidOptions.getLogger(), j0Var);
                if (f2 != null) {
                    k0.k(f2, j0Var, c6, d6);
                }
                iScope.J().n(d6);
                arrayDeque.add("user");
                iVar.r(logger, iScope.Q());
                arrayDeque.add("contexts");
                iVar.r(logger, iScope.J());
                arrayDeque.add("tags");
                iVar.r(logger, iScope.D());
                arrayDeque.add("extras");
                iVar.r(logger, iScope.getExtras());
                arrayDeque.add("fingerprint");
                iVar.r(logger, iScope.P());
                arrayDeque.add("level");
                iVar.r(logger, iScope.x());
                arrayDeque.add("breadcrumbs");
                iVar.r(logger, iScope.w());
            } catch (Throwable th2) {
                sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Could not serialize scope.", th2);
                return new HashMap();
            }
        }
        return hashMap;
    }
}
