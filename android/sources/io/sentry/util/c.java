package io.sentry.util;

import io.sentry.ILogger;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.c1;
import io.sentry.protocol.i0;
import java.io.BufferedWriter;
import java.io.ByteArrayOutputStream;
import java.io.OutputStreamWriter;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.HashMap;
import java.util.concurrent.atomic.AtomicIntegerArray;

/* loaded from: classes3.dex */
public abstract class c {
    public static final Charset a = Charset.forName("UTF-8");

    public static ArrayList a(AtomicIntegerArray atomicIntegerArray) {
        int length = atomicIntegerArray.length();
        ArrayList arrayList = new ArrayList(length);
        for (int i5 = 0; i5 < length; i5++) {
            arrayList.add(Integer.valueOf(atomicIntegerArray.get(i5)));
        }
        return arrayList;
    }

    public static long b(c1 c1Var, ILogger iLogger, SentryEvent sentryEvent) {
        if (sentryEvent == null) {
            return 0L;
        }
        try {
            b bVar = new b();
            c1Var.a(sentryEvent, bVar);
            return bVar.f12038d;
        } catch (Throwable th2) {
            iLogger.k(SentryLevel.ERROR, "Could not calculate size of serializable", th2);
            return 0L;
        }
    }

    public static byte[] c(c1 c1Var, ILogger iLogger, i0 i0Var) {
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            try {
                BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(byteArrayOutputStream, a));
                try {
                    c1Var.a(i0Var, bufferedWriter);
                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                    bufferedWriter.close();
                    byteArrayOutputStream.close();
                    return byteArray;
                } finally {
                }
            } finally {
            }
        } catch (Throwable th2) {
            iLogger.k(SentryLevel.ERROR, "Could not serialize serializable", th2);
            return null;
        }
    }

    public static HashMap d(Calendar calendar) {
        HashMap hashMap = new HashMap();
        hashMap.put("year", Integer.valueOf(calendar.get(1)));
        hashMap.put("month", Integer.valueOf(calendar.get(2)));
        hashMap.put("dayOfMonth", Integer.valueOf(calendar.get(5)));
        hashMap.put("hourOfDay", Integer.valueOf(calendar.get(11)));
        hashMap.put("minute", Integer.valueOf(calendar.get(12)));
        hashMap.put("second", Integer.valueOf(calendar.get(13)));
        return hashMap;
    }
}
