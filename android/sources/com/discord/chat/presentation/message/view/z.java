package com.discord.chat.presentation.message.view;

import android.content.Context;
import android.os.Environment;
import android.os.StatFs;
import io.sentry.SentryLevel;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.o0;
import java.io.File;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class z implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4073d = 1;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ boolean f4074e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4075i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f4076v;

    public /* synthetic */ z(o0 o0Var, io.sentry.protocol.f fVar, boolean z5) {
        this.f4075i = o0Var;
        this.f4076v = fVar;
        this.f4074e = z5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:40:0x00a1, code lost:
    
        r2 = new android.os.StatFs(r8.getPath());
     */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00bb A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        StatFs statFs;
        Long l6;
        File[] externalFilesDirs;
        File file;
        Long l7;
        Long l10;
        switch (this.f4073d) {
            case 0:
                VoiceChannelListInviteView.configure$lambda$11(this.f4074e, (VoiceChannelListInviteView) this.f4075i, (Function0) this.f4076v);
                break;
            default:
                o0 o0Var = (o0) this.f4075i;
                io.sentry.protocol.f fVar = (io.sentry.protocol.f) this.f4076v;
                Context context = o0Var.a;
                SentryAndroidOptions sentryAndroidOptions = o0Var.f11272b;
                File dataDirectory = Environment.getDataDirectory();
                Long l11 = null;
                if (dataDirectory != null) {
                    StatFs statFs2 = new StatFs(dataDirectory.getPath());
                    try {
                        l7 = Long.valueOf(statFs2.getBlockCountLong() * statFs2.getBlockSizeLong());
                    } catch (Throwable th2) {
                        sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting total internal storage amount.", th2);
                        l7 = null;
                    }
                    fVar.N = l7;
                    try {
                        l10 = Long.valueOf(statFs2.getAvailableBlocksLong() * statFs2.getBlockSizeLong());
                    } catch (Throwable th3) {
                        sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting unused internal storage amount.", th3);
                        l10 = null;
                    }
                    fVar.O = l10;
                }
                if (this.f4074e) {
                    File externalFilesDir = context.getExternalFilesDir(null);
                    try {
                        externalFilesDirs = context.getExternalFilesDirs(null);
                    } catch (Throwable unused) {
                        sentryAndroidOptions.getLogger().u(SentryLevel.INFO, "Not possible to read external files directory", new Object[0]);
                    }
                    if (externalFilesDirs != null) {
                        String absolutePath = externalFilesDir != null ? externalFilesDir.getAbsolutePath() : null;
                        int length = externalFilesDirs.length;
                        for (int i5 = 0; i5 < length; i5++) {
                            file = externalFilesDirs[i5];
                            if (file != null) {
                                if (absolutePath != null && !absolutePath.isEmpty() && file.getAbsolutePath().contains(absolutePath)) {
                                }
                                statFs = null;
                                if (statFs == null) {
                                    try {
                                        l6 = Long.valueOf(statFs.getBlockCountLong() * statFs.getBlockSizeLong());
                                    } catch (Throwable th4) {
                                        sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting total external storage amount.", th4);
                                        l6 = null;
                                    }
                                    fVar.P = l6;
                                    try {
                                        l11 = Long.valueOf(statFs.getAvailableBlocksLong() * statFs.getBlockSizeLong());
                                    } catch (Throwable th5) {
                                        sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting unused external storage amount.", th5);
                                    }
                                    fVar.Q = l11;
                                    break;
                                }
                            }
                        }
                    } else {
                        sentryAndroidOptions.getLogger().u(SentryLevel.INFO, "Not possible to read getExternalFilesDirs", new Object[0]);
                    }
                    file = null;
                    statFs = null;
                    if (statFs == null) {
                    }
                    break;
                }
                break;
        }
    }

    public /* synthetic */ z(boolean z5, VoiceChannelListInviteView voiceChannelListInviteView, Function0 function0) {
        this.f4074e = z5;
        this.f4075i = voiceChannelListInviteView;
        this.f4076v = function0;
    }
}
