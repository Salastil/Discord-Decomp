package com.google.android.exoplayer2;

import android.os.SystemClock;
import android.text.TextUtils;
import com.reactnativecommunity.webview.RNCWebViewManager;
import ke.d0;
import nd.r;

/* loaded from: classes3.dex */
public final class c extends PlaybackException {
    public final r E;
    public final boolean F;

    /* renamed from: i, reason: collision with root package name */
    public final int f5343i;

    /* renamed from: v, reason: collision with root package name */
    public final String f5344v;

    /* renamed from: w, reason: collision with root package name */
    public final int f5345w;

    /* renamed from: x, reason: collision with root package name */
    public final Format f5346x;

    /* renamed from: y, reason: collision with root package name */
    public final int f5347y;

    static {
        int i5 = d0.a;
        Integer.toString(RNCWebViewManager.COMMAND_CLEAR_CACHE, 36);
        Integer.toString(RNCWebViewManager.COMMAND_CLEAR_HISTORY, 36);
        Integer.toString(1003, 36);
        Integer.toString(1004, 36);
        Integer.toString(1005, 36);
        Integer.toString(1006, 36);
    }

    public c(int i5, Exception exc, int i6) {
        this(i5, exc, i6, null, -1, null, 4, false);
    }

    public final c a(r rVar) {
        String message = getMessage();
        int i5 = d0.a;
        return new c(message, getCause(), this.f5272d, this.f5343i, this.f5344v, this.f5345w, this.f5346x, this.f5347y, rVar, this.f5273e, this.F);
    }

    public c(String str, Throwable th2, int i5, int i6, String str2, int i10, Format format, int i11, r rVar, long j, boolean z5) {
        super(str, th2, i5, j);
        ke.b.g(!z5 || i6 == 1);
        ke.b.g(th2 != null || i6 == 3);
        this.f5343i = i6;
        this.f5344v = str2;
        this.f5345w = i10;
        this.f5346x = format;
        this.f5347y = i11;
        this.E = rVar;
        this.F = z5;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public c(int i5, Throwable th2, int i6, String str, int i10, Format format, int i11, boolean z5) {
        this(TextUtils.isEmpty(null) ? r0 : k0.d.k(r0, ": null"), th2, i6, i5, r5, r6, r7, i11, null, SystemClock.elapsedRealtime(), z5);
        String str2;
        int i12;
        Format format2;
        String str3;
        String str4;
        if (i5 == 0) {
            str2 = str;
            i12 = i10;
            format2 = format;
            str3 = "Source error";
        } else if (i5 != 1) {
            if (i5 != 3) {
                str3 = "Unexpected runtime error";
            } else {
                str3 = "Remote error";
            }
            str2 = str;
            i12 = i10;
            format2 = format;
        } else {
            StringBuilder sb2 = new StringBuilder();
            str2 = str;
            sb2.append(str2);
            sb2.append(" error, index=");
            i12 = i10;
            sb2.append(i12);
            sb2.append(", format=");
            format2 = format;
            sb2.append(format2);
            sb2.append(", format_supported=");
            int i13 = d0.a;
            if (i11 == 0) {
                str4 = "NO";
            } else if (i11 == 1) {
                str4 = "NO_UNSUPPORTED_TYPE";
            } else if (i11 == 2) {
                str4 = "NO_UNSUPPORTED_DRM";
            } else if (i11 == 3) {
                str4 = "NO_EXCEEDS_CAPABILITIES";
            } else if (i11 == 4) {
                str4 = "YES";
            } else {
                throw new IllegalStateException();
            }
            sb2.append(str4);
            str3 = sb2.toString();
        }
    }
}
