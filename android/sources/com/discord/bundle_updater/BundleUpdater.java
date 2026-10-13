package com.discord.bundle_updater;

import a3.e;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.res.AssetManager;
import android.net.Uri;
import android.webkit.CookieManager;
import androidx.core.content.pm.ShortcutInfoCompat;
import com.discord.client_info.ClientInfo;
import com.discord.crash_reporting.CrashPersistence;
import com.discord.crash_reporting.CrashReporting;
import com.discord.file_downloader.FileDownloader;
import com.discord.jank_stats.JankRecordStore;
import com.discord.logging.Log;
import com.discord.minibsdiff.BSDiff;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.discord.resource_usage.DeviceResourceUsageRecorder;
import com.discord.shortcuts.ShortcutData;
import com.discord.shortcuts.ShortcutUtilsKt;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableNativeMap;
import et.k;
import fo.l;
import fo.r;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.ConnectException;
import java.net.SocketException;
import java.net.SocketTimeoutException;
import java.net.UnknownHostException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.TimeUnit;
import java.util.regex.Pattern;
import javax.net.ssl.SSLException;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.enums.EnumEntries;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.time.Duration;
import kotlin.time.TimeMark;
import kotlinx.coroutines.CoroutineScope;
import lh.y;
import lr.f;
import lr.g;
import nr.g0;
import nr.m1;
import nr.x;
import okhttp3.Cookie;
import okhttp3.CookieJar;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okhttp3.Interceptor;
import okhttp3.OkHttpClient;
import okhttp3.Response;
import okhttp3.ResponseBody;
import org.jetbrains.annotations.NotNull;
import qo.n;
import s4.h;
import sr.q;
import z0.d;

@Metadata(d1 = {"\u0000ö\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0003\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u0011\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0012\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u001b\u0018\u0000 \u00ad\u00012\u00020\u0001:\u0016®\u0001¯\u0001°\u0001±\u0001²\u0001³\u0001´\u0001µ\u0001¶\u0001·\u0001\u00ad\u0001B+\b\u0002\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0004\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\b\b\u0002\u0010\t\u001a\u00020\b¢\u0006\u0004\b\n\u0010\u000bJ\u000f\u0010\r\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\r\u0010\u000eJ\u001d\u0010\u0014\u001a\u00020\u00132\u0006\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u0012\u001a\u00020\u0011¢\u0006\u0004\b\u0014\u0010\u0015J/\u0010\u001b\u001a\b\u0012\u0002\b\u0003\u0018\u00010\u001a2\b\b\u0002\u0010\u0017\u001a\u00020\u00162\u0010\b\u0002\u0010\u0019\u001a\n\u0012\u0004\u0012\u00020\u0013\u0018\u00010\u0018¢\u0006\u0004\b\u001b\u0010\u001cJ\u001f\u0010 \u001a\u00020\u00042\u0006\u0010\u001e\u001a\u00020\u001d2\u0006\u0010\u001f\u001a\u00020\u001dH\u0002¢\u0006\u0004\b \u0010!J\u0017\u0010\"\u001a\u00020\u00042\u0006\u0010\u001f\u001a\u00020\u001dH\u0002¢\u0006\u0004\b\"\u0010#J\u001f\u0010&\u001a\u00020\u00132\u0006\u0010$\u001a\u00020\u00042\u0006\u0010%\u001a\u00020\u0004H\u0002¢\u0006\u0004\b&\u0010'J\u000f\u0010)\u001a\u00020(H\u0002¢\u0006\u0004\b)\u0010*J\u0017\u0010+\u001a\u00020\u00132\u0006\u0010\u0010\u001a\u00020\u000fH\u0002¢\u0006\u0004\b+\u0010,J)\u00101\u001a\u00020(2\b\u0010-\u001a\u0004\u0018\u00010\u001d2\u0006\u0010/\u001a\u00020.2\u0006\u00100\u001a\u00020\u001dH\u0002¢\u0006\u0004\b1\u00102J\u0017\u00106\u001a\u0002052\u0006\u00104\u001a\u000203H\u0002¢\u0006\u0004\b6\u00107Je\u0010E\u001a\b\u0012\u0004\u0012\u00020B0A2\u0006\u00108\u001a\u00020\u001d2\u001c\b\u0002\u0010;\u001a\u0016\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u001d\u0012\u0004\u0012\u00020\u001d0:\u0018\u0001092\n\b\u0002\u0010<\u001a\u0004\u0018\u00010\u001d2\n\b\u0002\u0010>\u001a\u0004\u0018\u00010=2\u0006\u0010?\u001a\u00020\u00042\b\b\u0002\u0010@\u001a\u00020\u0016H\u0002¢\u0006\u0004\bC\u0010DJ\u0013\u0010F\u001a\u00020\u0004*\u00020\u0004H\u0002¢\u0006\u0004\bF\u0010GJ\u000f\u0010H\u001a\u00020\u0013H\u0002¢\u0006\u0004\bH\u0010IJ'\u0010L\u001a\u00020\u00132\u0016\u0010K\u001a\f\u0012\b\b\u0001\u0012\u0004\u0018\u00010\u001d0J\"\u0004\u0018\u00010\u001dH\u0002¢\u0006\u0004\bL\u0010MJ#\u0010Q\u001a\u00020(2\u0006\u0010O\u001a\u00020N2\n\b\u0002\u0010P\u001a\u0004\u0018\u00010\u001dH\u0002¢\u0006\u0004\bQ\u0010RJK\u0010Y\u001a\u00020\u00132\u0006\u0010O\u001a\u00020S2\u0006\u00108\u001a\u00020\u001d2\u0006\u0010U\u001a\u00020T2\n\b\u0002\u0010W\u001a\u0004\u0018\u00010V2\n\b\u0002\u0010X\u001a\u0004\u0018\u00010\u00162\n\b\u0002\u0010P\u001a\u0004\u0018\u00010\u001dH\u0002¢\u0006\u0004\bY\u0010ZJ\u0017\u0010[\u001a\u00020\u00132\u0006\u0010O\u001a\u00020(H\u0002¢\u0006\u0004\b[\u0010\\R\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u0010]R\u0014\u0010\u0005\u001a\u00020\u00048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0005\u0010^R\u0014\u0010\u0007\u001a\u00020\u00068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0007\u0010_R\u0014\u0010\t\u001a\u00020\b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\t\u0010`R#\u0010g\u001a\n b*\u0004\u0018\u00010a0a8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\bc\u0010d\u001a\u0004\be\u0010fR\u0014\u0010i\u001a\u00020h8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bi\u0010jR\u001b\u0010o\u001a\u00020k8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\bl\u0010d\u001a\u0004\bm\u0010nR\u001b\u0010s\u001a\u00020\u00048FX\u0086\u0084\u0002¢\u0006\f\n\u0004\bp\u0010d\u001a\u0004\bq\u0010rR\u0016\u0010t\u001a\u00020V8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\bt\u0010uR$\u0010w\u001a\u0002052\u0006\u0010v\u001a\u0002058\u0006@BX\u0086\u000e¢\u0006\f\n\u0004\bw\u0010x\u001a\u0004\bw\u0010yR\u0016\u0010z\u001a\u0002058\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\bz\u0010xR\u001e\u0010}\u001a\b\u0012\u0004\u0012\u00020|0{8\u0006¢\u0006\r\n\u0004\b}\u0010~\u001a\u0005\b\u007f\u0010\u0080\u0001R\u001b\u0010\u0081\u0001\u001a\u0004\u0018\u00010T8\u0002@\u0002X\u0082\u000e¢\u0006\b\n\u0006\b\u0081\u0001\u0010\u0082\u0001R8\u0010\u0084\u0001\u001a\u0011\u0012\u0004\u0012\u000205\u0012\u0004\u0012\u00020\u0013\u0018\u00010\u0083\u00018\u0006@\u0006X\u0086\u000e¢\u0006\u0018\n\u0006\b\u0084\u0001\u0010\u0085\u0001\u001a\u0006\b\u0086\u0001\u0010\u0087\u0001\"\u0006\b\u0088\u0001\u0010\u0089\u0001R>\u0010\u008a\u0001\u001a\u0017\u0012\n\u0012\b\u0012\u0004\u0012\u00020|09\u0012\u0004\u0012\u00020\u0013\u0018\u00010\u0083\u00018\u0006@\u0006X\u0086\u000e¢\u0006\u0018\n\u0006\b\u008a\u0001\u0010\u0085\u0001\u001a\u0006\b\u008b\u0001\u0010\u0087\u0001\"\u0006\b\u008c\u0001\u0010\u0089\u0001R)\u0010\u0091\u0001\u001a\u00020\u001d2\u0006\u0010v\u001a\u00020\u001d8F@BX\u0086\u000e¢\u0006\u0010\u001a\u0006\b\u008d\u0001\u0010\u008e\u0001\"\u0006\b\u008f\u0001\u0010\u0090\u0001R*\u0010\u0095\u0001\u001a\u00020\u001d2\u0007\u0010\u0092\u0001\u001a\u00020\u001d8F@FX\u0086\u000e¢\u0006\u0010\u001a\u0006\b\u0093\u0001\u0010\u008e\u0001\"\u0006\b\u0094\u0001\u0010\u0090\u0001R\u0017\u0010\u0099\u0001\u001a\u0005\u0018\u00010\u0096\u00018F¢\u0006\b\u001a\u0006\b\u0097\u0001\u0010\u0098\u0001R)\u0010\u009c\u0001\u001a\u00020\u001d2\u0006\u0010v\u001a\u00020\u001d8F@BX\u0086\u000e¢\u0006\u0010\u001a\u0006\b\u009a\u0001\u0010\u008e\u0001\"\u0006\b\u009b\u0001\u0010\u0090\u0001R0\u0010\u009e\u0001\u001a\u0005\u0018\u00010\u009d\u00012\n\u0010\u009e\u0001\u001a\u0005\u0018\u00010\u009d\u00018F@FX\u0086\u000e¢\u0006\u0010\u001a\u0006\b\u009f\u0001\u0010 \u0001\"\u0006\b¡\u0001\u0010¢\u0001R\u0017\u0010¤\u0001\u001a\u00020\u001d8BX\u0082\u0004¢\u0006\b\u001a\u0006\b£\u0001\u0010\u008e\u0001R\u0017\u0010¦\u0001\u001a\u00020\u001d8BX\u0082\u0004¢\u0006\b\u001a\u0006\b¥\u0001\u0010\u008e\u0001R-\u0010©\u0001\u001a\u0004\u0018\u00010\u001d2\b\u0010v\u001a\u0004\u0018\u00010\u001d8B@BX\u0082\u000e¢\u0006\u0010\u001a\u0006\b§\u0001\u0010\u008e\u0001\"\u0006\b¨\u0001\u0010\u0090\u0001R\u0016\u0010«\u0001\u001a\u0002058BX\u0082\u0004¢\u0006\u0007\u001a\u0005\bª\u0001\u0010yR\u0018\u0010-\u001a\u0004\u0018\u00010\u001d8BX\u0082\u0004¢\u0006\b\u001a\u0006\b¬\u0001\u0010\u008e\u0001¨\u0006¸\u0001"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater;", "", "Landroid/content/SharedPreferences;", "sharedPreferences", "Ljava/io/File;", "filesDirectory", "Landroid/content/res/AssetManager;", "assetManager", "Ljava/util/concurrent/ExecutorService;", "executor", "<init>", "(Landroid/content/SharedPreferences;Ljava/io/File;Landroid/content/res/AssetManager;Ljava/util/concurrent/ExecutorService;)V", "Lcom/discord/bundle_updater/BundleUpdater$ManifestInfo;", "manifestInfo", "()Lcom/discord/bundle_updater/BundleUpdater$ManifestInfo;", "Landroid/content/Context;", "context", "Landroid/content/Intent;", "intent", "", "handleIntent", "(Landroid/content/Context;Landroid/content/Intent;)V", "", "delaySeconds", "Lkotlin/Function0;", "onComplete", "Ljava/util/concurrent/Future;", "checkForUpdate", "(ILkotlin/jvm/functions/Function0;)Ljava/util/concurrent/Future;", "", "commit", "file", "otaFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;", "otaTempFile", "(Ljava/lang/String;)Ljava/io/File;", "src", "dst", "moveFile", "(Ljava/io/File;Ljava/io/File;)V", "Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttempt;", "attemptOtaUpdate", "()Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttempt;", "clearBundle", "(Landroid/content/Context;)V", "existingOtaCommit", "Lcom/discord/bundle_updater/AppManifest;", "newManifest", "newOtaCommit", "downloadOtaFiles", "(Ljava/lang/String;Lcom/discord/bundle_updater/AppManifest;Ljava/lang/String;)Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttempt;", "", "throwable", "", "isNetworkException", "(Ljava/lang/Throwable;)Z", "url", "", "Lkotlin/Pair;", "extraHeaders", "hash", "Lcom/discord/bundle_updater/BundleUpdater$Patch;", "patch", "destinationFile", "attempt", "Lkotlin/Result;", "Lokhttp3/Headers;", "downloadSingleFile-hUnOzRk", "(Ljava/lang/String;Ljava/util/List;Ljava/lang/String;Lcom/discord/bundle_updater/BundleUpdater$Patch;Ljava/io/File;I)Ljava/lang/Object;", "downloadSingleFile", "ensureEmptyFile", "(Ljava/io/File;)Ljava/io/File;", "validateBuildOverrideCookie", "()V", "", "knownOtaCommits", "deleteUnknownOtas", "([Ljava/lang/String;)V", "Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttemptResult;", "result", "error", "createOtaCheckAttempt", "(Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttemptResult;Ljava/lang/String;)Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttempt;", "Lcom/discord/bundle_updater/BundleUpdater$OtaAssetDownloadAttemptResult;", "Lkotlin/time/TimeMark;", "startMark", "", "bytesReceived", "statusCode", "trackAssetDownload", "(Lcom/discord/bundle_updater/BundleUpdater$OtaAssetDownloadAttemptResult;Ljava/lang/String;Lkotlin/time/TimeMark;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/String;)V", "trackCheckAttempt", "(Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttempt;)V", "Landroid/content/SharedPreferences;", "Ljava/io/File;", "Landroid/content/res/AssetManager;", "Ljava/util/concurrent/ExecutorService;", "Landroid/webkit/CookieManager;", "kotlin.jvm.PlatformType", "cookieManager$delegate", "Lkotlin/Lazy;", "getCookieManager", "()Landroid/webkit/CookieManager;", "cookieManager", "Lkotlinx/coroutines/CoroutineScope;", "coroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "Lokhttp3/OkHttpClient;", "client$delegate", "getClient", "()Lokhttp3/OkHttpClient;", "client", "otasRootDirectory$delegate", "getOtasRootDirectory", "()Ljava/io/File;", "otasRootDirectory", "totalBytesReceived", "J", "value", "isVersionRequired", "Z", "()Z", "otaUpdateChecking", "", "Lcom/discord/bundle_updater/BundleUpdater$OtaMetric;", "otaMetrics", "Ljava/util/List;", "getOtaMetrics", "()Ljava/util/List;", "otaCheckTimeMark", "Lkotlin/time/TimeMark;", "Lkotlin/Function1;", "onBundleDownloadedListener", "Lkotlin/jvm/functions/Function1;", "getOnBundleDownloadedListener", "()Lkotlin/jvm/functions/Function1;", "setOnBundleDownloadedListener", "(Lkotlin/jvm/functions/Function1;)V", "onOtaUpdateCheckedListener", "getOnOtaUpdateCheckedListener", "setOnOtaUpdateCheckedListener", "getManifestETag", "()Ljava/lang/String;", "setManifestETag", "(Ljava/lang/String;)V", "manifestETag", "cookieHeader", "getBuildOverrideCookieHeader", "setBuildOverrideCookieHeader", "buildOverrideCookieHeader", "Lokhttp3/Cookie;", "getBuildOverrideCookie", "()Lokhttp3/Cookie;", "buildOverrideCookie", "getOtaVersion", "setOtaVersion", "otaVersion", "Lcom/discord/bundle_updater/BundleUpdater$OtaBundle;", "bundle", "getBundle", "()Lcom/discord/bundle_updater/BundleUpdater$OtaBundle;", "setBundle", "(Lcom/discord/bundle_updater/BundleUpdater$OtaBundle;)V", "getVersion", "version", "getManifestURL", "manifestURL", "getInProgressOtaCommit", "setInProgressOtaCommit", "inProgressOtaCommit", "getValidOTAVersion", "validOTAVersion", "getExistingOtaCommit", "Companion", "ManifestInfo", "OtaMetric", "OtaCheckAttempt", "OtaAssetDownloadAttempt", "OtaCheckAttemptResult", "OtaAssetDownloadAttemptResult", "HttpException", "MaxDownloadAttemptsException", "Patch", "OtaBundle", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nBundleUpdater.kt\nKotlin\n*S Kotlin\n*F\n+ 1 BundleUpdater.kt\ncom/discord/bundle_updater/BundleUpdater\n+ 2 SharedPreferences.kt\nandroidx/core/content/SharedPreferencesKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 5 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 6 OkHttpClient.kt\nokhttp3/OkHttpClient$Builder\n*L\n1#1,911:1\n40#2,13:912\n40#2,13:925\n40#2,13:938\n40#2,13:951\n40#2,13:964\n1#3:977\n1#3:988\n1617#4,9:978\n1869#4:987\n1870#4:989\n1626#4:990\n1869#4,2:991\n13472#5,2:993\n563#6:995\n*S KotlinDebug\n*F\n+ 1 BundleUpdater.kt\ncom/discord/bundle_updater/BundleUpdater\n*L\n167#1:912,13\n171#1:925,13\n181#1:938,13\n192#1:951,13\n212#1:964,13\n479#1:988\n479#1:978,9\n479#1:987\n479#1:989\n479#1:990\n552#1:991,2\n777#1:993,2\n101#1:995\n*E\n"})
/* loaded from: classes.dex */
public final class BundleUpdater {

    @NotNull
    public static final String ANDROID_JS_BUNDLE_ASSET_NAME = "index.android.bundle";

    @NotNull
    private static final HttpUrl BASE_OTA_URL;

    @NotNull
    private static final String BUILD_OVERRIDE_COOKIE = "buildOverride";

    @NotNull
    public static final String CLEAR_BUILD_OVERRIDE = "clear_build_override";

    @NotNull
    private static final String KEY_ANDROID_JS_BUNDLE = "key_android_js_bundle";

    @NotNull
    private static final String KEY_ANDROID_JS_BUNDLE_RELEASE_NAME = "key_android_js_bundle_release_name";

    @NotNull
    private static final String KEY_BUILD_OVERRIDE_COOKIE_HEADER = "build_override_cookie_header";

    @NotNull
    private static final String KEY_ETAG = "e_tag";

    @NotNull
    private static final String KEY_IN_PROGRESS_OTA_COMMIT = "in_progress_ota_commit";

    @NotNull
    private static final String KEY_OTA_VERSION = "ota_version";

    @NotNull
    private static final String OTAS_DIRECTORY = "otas";
    private static final String TAG;
    private static BundleUpdater updater;

    @NotNull
    private final AssetManager assetManager;

    /* renamed from: client$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy client;

    /* renamed from: cookieManager$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy cookieManager;

    @NotNull
    private final CoroutineScope coroutineScope;

    @NotNull
    private final ExecutorService executor;

    @NotNull
    private final File filesDirectory;
    private boolean isVersionRequired;
    private Function1<? super Boolean, Unit> onBundleDownloadedListener;
    private Function1<? super List<? extends OtaMetric>, Unit> onOtaUpdateCheckedListener;
    private TimeMark otaCheckTimeMark;

    @NotNull
    private final List<OtaMetric> otaMetrics;
    private boolean otaUpdateChecking;

    /* renamed from: otasRootDirectory$delegate, reason: from kotlin metadata */
    @NotNull
    private final Lazy otasRootDirectory;

    @NotNull
    private final SharedPreferences sharedPreferences;
    private long totalBytesReceived;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private static final Uri BASE_OTA_URI = new Uri.Builder().scheme("https").authority("discord.com").build();

    @Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001aJ\u0006\u0010\u001b\u001a\u00020\u0018J\u001a\u0010\u001c\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001a2\n\u0010\u001d\u001a\u0006\u0012\u0002\b\u00030\u001eJ\u0006\u0010\u001f\u001a\u00020\u0016R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u0016\u0010\u000f\u001a\n \u0011*\u0004\u0018\u00010\u00100\u0010X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0014\u001a\n \u0011*\u0004\u0018\u00010\u00050\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0016X\u0082.¢\u0006\u0002\n\u0000¨\u0006 "}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$Companion;", "", "<init>", "()V", "CLEAR_BUILD_OVERRIDE", "", "KEY_ANDROID_JS_BUNDLE", "KEY_ANDROID_JS_BUNDLE_RELEASE_NAME", "KEY_ETAG", "KEY_IN_PROGRESS_OTA_COMMIT", "KEY_OTA_VERSION", "KEY_BUILD_OVERRIDE_COOKIE_HEADER", "ANDROID_JS_BUNDLE_ASSET_NAME", "BUILD_OVERRIDE_COOKIE", "OTAS_DIRECTORY", "BASE_OTA_URI", "Landroid/net/Uri;", "kotlin.jvm.PlatformType", "BASE_OTA_URL", "Lokhttp3/HttpUrl;", "TAG", "updater", "Lcom/discord/bundle_updater/BundleUpdater;", "init", "", "context", "Landroid/content/Context;", "checkForOta", "addClearBuildOverrideShortcut", "activity", "Ljava/lang/Class;", "instance", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public final void addClearBuildOverrideShortcut(@NotNull Context context, @NotNull Class<?> activity) {
            ShortcutInfoCompat createShortcut;
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(activity, "activity");
            if (CrashPersistence.INSTANCE.getInstance(context).isStaff()) {
                createShortcut = ShortcutUtilsKt.createShortcut(context, "clear-build-override", "Clear Build Override", "Clear Build Override", null, m0.f13512d, ShortcutData.INSTANCE.createShortcutIntent(context, BundleUpdater.CLEAR_BUILD_OVERRIDE, activity, "clear-build-override", v0.d()), (r17 & 64) != 0 ? 0 : 0);
                d.k(context, createShortcut);
            }
        }

        public final void checkForOta() {
            if (Intrinsics.areEqual(CrashReporting.INSTANCE.isCrashedLastRun(), Boolean.FALSE)) {
                BundleUpdater.checkForUpdate$default(instance(), 10, null, 2, null);
            }
        }

        public final void init(@NotNull Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences("BundleUpdater", 0);
            Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
            File filesDir = context.getFilesDir();
            Intrinsics.checkNotNullExpressionValue(filesDir, "getFilesDir(...)");
            AssetManager assets = context.getAssets();
            Intrinsics.checkNotNullExpressionValue(assets, "getAssets(...)");
            BundleUpdater.updater = new BundleUpdater(sharedPreferences, filesDir, assets, null, 8, null);
        }

        @NotNull
        public final BundleUpdater instance() {
            BundleUpdater bundleUpdater = BundleUpdater.updater;
            if (bundleUpdater != null) {
                return bundleUpdater;
            }
            Intrinsics.throwUninitializedPropertyAccessException("updater");
            return null;
        }

        private Companion() {
        }
    }

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0005\b\u0002\u0018\u00002\u00060\u0001j\u0002`\u0002B\u000f\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\b¨\u0006\t"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$HttpException;", "Ljava/lang/Exception;", "Lkotlin/Exception;", "statusCode", "", "<init>", "(I)V", "getStatusCode", "()I", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class HttpException extends Exception {
        private final int statusCode;

        public HttpException(int i5) {
            super(h.e(i5, "Failure to fetch manifest, status code: ", "..."));
            this.statusCode = i5;
        }

        public final int getStatusCode() {
            return this.statusCode;
        }
    }

    @Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0006\u0010\f\u001a\u00020\rJ\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u000f\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u001f\u0010\u0010\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005HÆ\u0001J\u0013\u0010\u0011\u001a\u00020\u00122\b\u0010\u0013\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0014\u001a\u00020\u0015HÖ\u0001J\t\u0010\u0016\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0017"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$ManifestInfo;", "", "source", "", "metadata", "Lcom/discord/bundle_updater/AppManifestMetadata;", "<init>", "(Ljava/lang/String;Lcom/discord/bundle_updater/AppManifestMetadata;)V", "getSource", "()Ljava/lang/String;", "getMetadata", "()Lcom/discord/bundle_updater/AppManifestMetadata;", "toNativeMap", "Lcom/facebook/react/bridge/WritableNativeMap;", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class ManifestInfo {
        private final AppManifestMetadata metadata;

        @NotNull
        private final String source;

        public ManifestInfo(@NotNull String source, AppManifestMetadata appManifestMetadata) {
            Intrinsics.checkNotNullParameter(source, "source");
            this.source = source;
            this.metadata = appManifestMetadata;
        }

        public static /* synthetic */ ManifestInfo copy$default(ManifestInfo manifestInfo, String str, AppManifestMetadata appManifestMetadata, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = manifestInfo.source;
            }
            if ((i5 & 2) != 0) {
                appManifestMetadata = manifestInfo.metadata;
            }
            return manifestInfo.copy(str, appManifestMetadata);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getSource() {
            return this.source;
        }

        /* renamed from: component2, reason: from getter */
        public final AppManifestMetadata getMetadata() {
            return this.metadata;
        }

        @NotNull
        public final ManifestInfo copy(@NotNull String source, AppManifestMetadata metadata) {
            Intrinsics.checkNotNullParameter(source, "source");
            return new ManifestInfo(source, metadata);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof ManifestInfo)) {
                return false;
            }
            ManifestInfo manifestInfo = (ManifestInfo) other;
            return Intrinsics.areEqual(this.source, manifestInfo.source) && Intrinsics.areEqual(this.metadata, manifestInfo.metadata);
        }

        public final AppManifestMetadata getMetadata() {
            return this.metadata;
        }

        @NotNull
        public final String getSource() {
            return this.source;
        }

        public int hashCode() {
            int hashCode = this.source.hashCode() * 31;
            AppManifestMetadata appManifestMetadata = this.metadata;
            return hashCode + (appManifestMetadata == null ? 0 : appManifestMetadata.hashCode());
        }

        @NotNull
        public final WritableNativeMap toNativeMap() {
            Pair pair = new Pair("source", this.source);
            AppManifestMetadata appManifestMetadata = this.metadata;
            return NativeMapExtensionsKt.nativeMapOf(pair, new Pair("metadata", appManifestMetadata != null ? appManifestMetadata.toNativeMap() : null));
        }

        @NotNull
        public String toString() {
            return "ManifestInfo(source=" + this.source + ", metadata=" + this.metadata + ")";
        }
    }

    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\b\u0002\u0018\u00002\u00060\u0001j\u0002`\u0002B\u0017\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0004\b\u0007\u0010\b¨\u0006\t"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$MaxDownloadAttemptsException;", "Ljava/lang/Exception;", "Lkotlin/Exception;", "url", "", "attempts", "", "<init>", "(Ljava/lang/String;I)V", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class MaxDownloadAttemptsException extends Exception {
        /* JADX WARN: Illegal instructions before constructor call */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public MaxDownloadAttemptsException(@NotNull String url, int i5) {
            super(com.discord.chat.bridge.botuikit.a.j(r0, url, ", aborting..."));
            Intrinsics.checkNotNullParameter(url, "url");
            StringBuilder sb2 = new StringBuilder("Failed ");
            sb2.append(i5);
            sb2.append(" times to download ");
        }
    }

    @Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\b\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\b\u0082\b\u0018\u00002\u00020\u0001BG\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\r\u0010\u000eJ\b\u0010\u001c\u001a\u00020\u001dH\u0016J\t\u0010\u001e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001f\u001a\u00020\u0005HÆ\u0003J\u0010\u0010 \u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\b!J\u0010\u0010\"\u001a\u0004\u0018\u00010\tHÆ\u0003¢\u0006\u0002\u0010\u0016J\u0010\u0010#\u001a\u0004\u0018\u00010\u000bHÆ\u0003¢\u0006\u0002\u0010\u0019J\u000b\u0010$\u001a\u0004\u0018\u00010\u0005HÆ\u0003JT\u0010%\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u0005HÆ\u0001¢\u0006\u0004\b&\u0010'J\u0013\u0010(\u001a\u00020)2\b\u0010*\u001a\u0004\u0018\u00010+HÖ\u0003J\t\u0010,\u001a\u00020\u000bHÖ\u0001J\t\u0010-\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0015\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\n\n\u0002\u0010\u0017\u001a\u0004\b\u0015\u0010\u0016R\u0015\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\n\n\u0002\u0010\u001a\u001a\u0004\b\u0018\u0010\u0019R\u0013\u0010\f\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u0012¨\u0006."}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$OtaAssetDownloadAttempt;", "Lcom/discord/bundle_updater/BundleUpdater$OtaMetric;", "result", "Lcom/discord/bundle_updater/BundleUpdater$OtaAssetDownloadAttemptResult;", "url", "", "duration", "Lkotlin/time/Duration;", "bytesReceived", "", "statusCode", "", "error", "<init>", "(Lcom/discord/bundle_updater/BundleUpdater$OtaAssetDownloadAttemptResult;Ljava/lang/String;Lkotlin/time/Duration;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/String;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getResult", "()Lcom/discord/bundle_updater/BundleUpdater$OtaAssetDownloadAttemptResult;", "getUrl", "()Ljava/lang/String;", "getDuration-FghU774", "()Lkotlin/time/Duration;", "getBytesReceived", "()Ljava/lang/Long;", "Ljava/lang/Long;", "getStatusCode", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getError", "toNativeMap", "Lcom/facebook/react/bridge/ReadableMap;", "component1", "component2", "component3", "component3-FghU774", "component4", "component5", "component6", "copy", "copy-fUqyM7Y", "(Lcom/discord/bundle_updater/BundleUpdater$OtaAssetDownloadAttemptResult;Ljava/lang/String;Lkotlin/time/Duration;Ljava/lang/Long;Ljava/lang/Integer;Ljava/lang/String;)Lcom/discord/bundle_updater/BundleUpdater$OtaAssetDownloadAttempt;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class OtaAssetDownloadAttempt implements OtaMetric {
        private final Long bytesReceived;
        private final Duration duration;
        private final String error;

        @NotNull
        private final OtaAssetDownloadAttemptResult result;
        private final Integer statusCode;

        @NotNull
        private final String url;

        public /* synthetic */ OtaAssetDownloadAttempt(OtaAssetDownloadAttemptResult otaAssetDownloadAttemptResult, String str, Duration duration, Long l6, Integer num, String str2, DefaultConstructorMarker defaultConstructorMarker) {
            this(otaAssetDownloadAttemptResult, str, duration, l6, num, str2);
        }

        /* renamed from: copy-fUqyM7Y$default, reason: not valid java name */
        public static /* synthetic */ OtaAssetDownloadAttempt m255copyfUqyM7Y$default(OtaAssetDownloadAttempt otaAssetDownloadAttempt, OtaAssetDownloadAttemptResult otaAssetDownloadAttemptResult, String str, Duration duration, Long l6, Integer num, String str2, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                otaAssetDownloadAttemptResult = otaAssetDownloadAttempt.result;
            }
            if ((i5 & 2) != 0) {
                str = otaAssetDownloadAttempt.url;
            }
            if ((i5 & 4) != 0) {
                duration = otaAssetDownloadAttempt.duration;
            }
            if ((i5 & 8) != 0) {
                l6 = otaAssetDownloadAttempt.bytesReceived;
            }
            if ((i5 & 16) != 0) {
                num = otaAssetDownloadAttempt.statusCode;
            }
            if ((i5 & 32) != 0) {
                str2 = otaAssetDownloadAttempt.error;
            }
            Integer num2 = num;
            String str3 = str2;
            return otaAssetDownloadAttempt.m257copyfUqyM7Y(otaAssetDownloadAttemptResult, str, duration, l6, num2, str3);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final OtaAssetDownloadAttemptResult getResult() {
            return this.result;
        }

        @NotNull
        /* renamed from: component2, reason: from getter */
        public final String getUrl() {
            return this.url;
        }

        /* renamed from: component3-FghU774, reason: not valid java name and from getter */
        public final Duration getDuration() {
            return this.duration;
        }

        /* renamed from: component4, reason: from getter */
        public final Long getBytesReceived() {
            return this.bytesReceived;
        }

        /* renamed from: component5, reason: from getter */
        public final Integer getStatusCode() {
            return this.statusCode;
        }

        /* renamed from: component6, reason: from getter */
        public final String getError() {
            return this.error;
        }

        @NotNull
        /* renamed from: copy-fUqyM7Y, reason: not valid java name */
        public final OtaAssetDownloadAttempt m257copyfUqyM7Y(@NotNull OtaAssetDownloadAttemptResult result, @NotNull String url, Duration duration, Long bytesReceived, Integer statusCode, String error) {
            Intrinsics.checkNotNullParameter(result, "result");
            Intrinsics.checkNotNullParameter(url, "url");
            return new OtaAssetDownloadAttempt(result, url, duration, bytesReceived, statusCode, error, null);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof OtaAssetDownloadAttempt)) {
                return false;
            }
            OtaAssetDownloadAttempt otaAssetDownloadAttempt = (OtaAssetDownloadAttempt) other;
            return this.result == otaAssetDownloadAttempt.result && Intrinsics.areEqual(this.url, otaAssetDownloadAttempt.url) && Intrinsics.areEqual(this.duration, otaAssetDownloadAttempt.duration) && Intrinsics.areEqual(this.bytesReceived, otaAssetDownloadAttempt.bytesReceived) && Intrinsics.areEqual(this.statusCode, otaAssetDownloadAttempt.statusCode) && Intrinsics.areEqual(this.error, otaAssetDownloadAttempt.error);
        }

        public final Long getBytesReceived() {
            return this.bytesReceived;
        }

        /* renamed from: getDuration-FghU774, reason: not valid java name */
        public final Duration m258getDurationFghU774() {
            return this.duration;
        }

        public final String getError() {
            return this.error;
        }

        @NotNull
        public final OtaAssetDownloadAttemptResult getResult() {
            return this.result;
        }

        public final Integer getStatusCode() {
            return this.statusCode;
        }

        @NotNull
        public final String getUrl() {
            return this.url;
        }

        public int hashCode() {
            int d6 = e.d(this.result.hashCode() * 31, 31, this.url);
            Duration duration = this.duration;
            int hashCode = (d6 + (duration == null ? 0 : Long.hashCode(duration.f13598d))) * 31;
            Long l6 = this.bytesReceived;
            int hashCode2 = (hashCode + (l6 == null ? 0 : l6.hashCode())) * 31;
            Integer num = this.statusCode;
            int hashCode3 = (hashCode2 + (num == null ? 0 : num.hashCode())) * 31;
            String str = this.error;
            return hashCode3 + (str != null ? str.hashCode() : 0);
        }

        @Override // com.discord.bundle_updater.BundleUpdater.OtaMetric
        @NotNull
        public ReadableMap toNativeMap() {
            Pair pair = new Pair("type", "OtaAssetDownloadAttempt");
            Pair pair2 = new Pair("result", this.result.getValue());
            Pair pair3 = new Pair("url", this.url);
            Pair pair4 = new Pair("bytesReceived", this.bytesReceived);
            Duration duration = this.duration;
            return NativeMapExtensionsKt.nativeMapOf(pair, pair2, pair3, pair4, new Pair("durationSeconds", duration != null ? Double.valueOf(Duration.j(duration.f13598d, lr.d.f14212v)) : null), new Pair("statusCode", this.statusCode), new Pair("error", this.error));
        }

        @NotNull
        public String toString() {
            return "OtaAssetDownloadAttempt(result=" + this.result + ", url=" + this.url + ", duration=" + this.duration + ", bytesReceived=" + this.bytesReceived + ", statusCode=" + this.statusCode + ", error=" + this.error + ")";
        }

        private OtaAssetDownloadAttempt(OtaAssetDownloadAttemptResult result, String url, Duration duration, Long l6, Integer num, String str) {
            Intrinsics.checkNotNullParameter(result, "result");
            Intrinsics.checkNotNullParameter(url, "url");
            this.result = result;
            this.url = url;
            this.duration = duration;
            this.bytesReceived = l6;
            this.statusCode = num;
            this.error = str;
        }

        public /* synthetic */ OtaAssetDownloadAttempt(OtaAssetDownloadAttemptResult otaAssetDownloadAttemptResult, String str, Duration duration, Long l6, Integer num, String str2, int i5, DefaultConstructorMarker defaultConstructorMarker) {
            this(otaAssetDownloadAttemptResult, str, (i5 & 4) != 0 ? null : duration, (i5 & 8) != 0 ? null : l6, (i5 & 16) != 0 ? null : num, (i5 & 32) != 0 ? null : str2, null);
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\b\u0082\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\t¨\u0006\n"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$OtaAssetDownloadAttemptResult;", "", "value", "", "<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "getValue", "()Ljava/lang/String;", "SUCCESS", "FAILURE", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class OtaAssetDownloadAttemptResult {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ OtaAssetDownloadAttemptResult[] $VALUES;

        @NotNull
        private final String value;
        public static final OtaAssetDownloadAttemptResult SUCCESS = new OtaAssetDownloadAttemptResult("SUCCESS", 0, "success");
        public static final OtaAssetDownloadAttemptResult FAILURE = new OtaAssetDownloadAttemptResult("FAILURE", 1, "failure");

        private static final /* synthetic */ OtaAssetDownloadAttemptResult[] $values() {
            return new OtaAssetDownloadAttemptResult[]{SUCCESS, FAILURE};
        }

        static {
            OtaAssetDownloadAttemptResult[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
        }

        private OtaAssetDownloadAttemptResult(String str, int i5, String str2) {
            this.value = str2;
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static OtaAssetDownloadAttemptResult valueOf(String str) {
            return (OtaAssetDownloadAttemptResult) Enum.valueOf(OtaAssetDownloadAttemptResult.class, str);
        }

        public static OtaAssetDownloadAttemptResult[] values() {
            return (OtaAssetDownloadAttemptResult[]) $VALUES.clone();
        }

        @NotNull
        public final String getValue() {
            return this.value;
        }
    }

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\r\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u001f\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0013HÖ\u0001J\t\u0010\u0014\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0015"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$OtaBundle;", "", "location", "Ljava/io/File;", "releaseName", "", "<init>", "(Ljava/io/File;Ljava/lang/String;)V", "getLocation", "()Ljava/io/File;", "getReleaseName", "()Ljava/lang/String;", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class OtaBundle {

        @NotNull
        private final File location;
        private final String releaseName;

        public OtaBundle(@NotNull File location, String str) {
            Intrinsics.checkNotNullParameter(location, "location");
            this.location = location;
            this.releaseName = str;
        }

        public static /* synthetic */ OtaBundle copy$default(OtaBundle otaBundle, File file, String str, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                file = otaBundle.location;
            }
            if ((i5 & 2) != 0) {
                str = otaBundle.releaseName;
            }
            return otaBundle.copy(file, str);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final File getLocation() {
            return this.location;
        }

        /* renamed from: component2, reason: from getter */
        public final String getReleaseName() {
            return this.releaseName;
        }

        @NotNull
        public final OtaBundle copy(@NotNull File location, String releaseName) {
            Intrinsics.checkNotNullParameter(location, "location");
            return new OtaBundle(location, releaseName);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof OtaBundle)) {
                return false;
            }
            OtaBundle otaBundle = (OtaBundle) other;
            return Intrinsics.areEqual(this.location, otaBundle.location) && Intrinsics.areEqual(this.releaseName, otaBundle.releaseName);
        }

        @NotNull
        public final File getLocation() {
            return this.location;
        }

        public final String getReleaseName() {
            return this.releaseName;
        }

        public int hashCode() {
            int hashCode = this.location.hashCode() * 31;
            String str = this.releaseName;
            return hashCode + (str == null ? 0 : str.hashCode());
        }

        @NotNull
        public String toString() {
            return "OtaBundle(location=" + this.location + ", releaseName=" + this.releaseName + ")";
        }
    }

    @Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0082\b\u0018\u00002\u00020\u0001B+\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\u0004\b\n\u0010\u000bJ\b\u0010\u0014\u001a\u00020\u0015H\u0016J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\u0017\u001a\u00020\u0005HÆ\u0003¢\u0006\u0004\b\u0018\u0010\u000fJ\t\u0010\u0019\u001a\u00020\u0007HÆ\u0003J\u000b\u0010\u001a\u001a\u0004\u0018\u00010\tHÆ\u0003J:\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\tHÆ\u0001¢\u0006\u0004\b\u001c\u0010\u001dJ\u0013\u0010\u001e\u001a\u00020\u001f2\b\u0010 \u001a\u0004\u0018\u00010!HÖ\u0003J\t\u0010\"\u001a\u00020#HÖ\u0001J\t\u0010$\u001a\u00020\tHÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0013\u0010\u0004\u001a\u00020\u0005¢\u0006\n\n\u0002\u0010\u0010\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u000fR\u0013\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013¨\u0006%"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttempt;", "Lcom/discord/bundle_updater/BundleUpdater$OtaMetric;", "result", "Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttemptResult;", "duration", "Lkotlin/time/Duration;", "totalBytesReceived", "", "error", "", "<init>", "(Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttemptResult;JJLjava/lang/String;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getResult", "()Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttemptResult;", "getDuration-UwyO8pc", "()J", "J", "getTotalBytesReceived", "getError", "()Ljava/lang/String;", "toNativeMap", "Lcom/facebook/react/bridge/ReadableMap;", "component1", "component2", "component2-UwyO8pc", "component3", "component4", "copy", "copy-dWUq8MI", "(Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttemptResult;JJLjava/lang/String;)Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttempt;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class OtaCheckAttempt implements OtaMetric {
        private final long duration;
        private final String error;

        @NotNull
        private final OtaCheckAttemptResult result;
        private final long totalBytesReceived;

        public /* synthetic */ OtaCheckAttempt(OtaCheckAttemptResult otaCheckAttemptResult, long j, long j5, String str, DefaultConstructorMarker defaultConstructorMarker) {
            this(otaCheckAttemptResult, j, j5, str);
        }

        /* renamed from: copy-dWUq8MI$default, reason: not valid java name */
        public static /* synthetic */ OtaCheckAttempt m259copydWUq8MI$default(OtaCheckAttempt otaCheckAttempt, OtaCheckAttemptResult otaCheckAttemptResult, long j, long j5, String str, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                otaCheckAttemptResult = otaCheckAttempt.result;
            }
            if ((i5 & 2) != 0) {
                j = otaCheckAttempt.duration;
            }
            if ((i5 & 4) != 0) {
                j5 = otaCheckAttempt.totalBytesReceived;
            }
            if ((i5 & 8) != 0) {
                str = otaCheckAttempt.error;
            }
            String str2 = str;
            return otaCheckAttempt.m261copydWUq8MI(otaCheckAttemptResult, j, j5, str2);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final OtaCheckAttemptResult getResult() {
            return this.result;
        }

        /* renamed from: component2-UwyO8pc, reason: not valid java name and from getter */
        public final long getDuration() {
            return this.duration;
        }

        /* renamed from: component3, reason: from getter */
        public final long getTotalBytesReceived() {
            return this.totalBytesReceived;
        }

        /* renamed from: component4, reason: from getter */
        public final String getError() {
            return this.error;
        }

        @NotNull
        /* renamed from: copy-dWUq8MI, reason: not valid java name */
        public final OtaCheckAttempt m261copydWUq8MI(@NotNull OtaCheckAttemptResult result, long duration, long totalBytesReceived, String error) {
            Intrinsics.checkNotNullParameter(result, "result");
            return new OtaCheckAttempt(result, duration, totalBytesReceived, error, null);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (other instanceof OtaCheckAttempt) {
                OtaCheckAttempt otaCheckAttempt = (OtaCheckAttempt) other;
                if (this.result == otaCheckAttempt.result) {
                    long j = this.duration;
                    long j5 = otaCheckAttempt.duration;
                    lr.a aVar = Duration.f13595e;
                    if (j == j5 && this.totalBytesReceived == otaCheckAttempt.totalBytesReceived && Intrinsics.areEqual(this.error, otaCheckAttempt.error)) {
                        return true;
                    }
                }
            }
            return false;
        }

        /* renamed from: getDuration-UwyO8pc, reason: not valid java name */
        public final long m262getDurationUwyO8pc() {
            return this.duration;
        }

        public final String getError() {
            return this.error;
        }

        @NotNull
        public final OtaCheckAttemptResult getResult() {
            return this.result;
        }

        public final long getTotalBytesReceived() {
            return this.totalBytesReceived;
        }

        public int hashCode() {
            int hashCode = this.result.hashCode() * 31;
            long j = this.duration;
            lr.a aVar = Duration.f13595e;
            int g6 = com.discord.chat.bridge.botuikit.a.g(this.totalBytesReceived, com.discord.chat.bridge.botuikit.a.g(j, hashCode, 31), 31);
            String str = this.error;
            return g6 + (str == null ? 0 : str.hashCode());
        }

        @Override // com.discord.bundle_updater.BundleUpdater.OtaMetric
        @NotNull
        public ReadableMap toNativeMap() {
            return NativeMapExtensionsKt.nativeMapOf(new Pair("type", "OtaCheckAttempt"), new Pair("result", this.result.getValue()), new Pair("durationSeconds", Double.valueOf(Duration.j(this.duration, lr.d.f14212v))), new Pair("bytesReceived", Long.valueOf(this.totalBytesReceived)), new Pair("error", this.error));
        }

        @NotNull
        public String toString() {
            return "OtaCheckAttempt(result=" + this.result + ", duration=" + Duration.l(this.duration) + ", totalBytesReceived=" + this.totalBytesReceived + ", error=" + this.error + ")";
        }

        private OtaCheckAttempt(OtaCheckAttemptResult result, long j, long j5, String str) {
            Intrinsics.checkNotNullParameter(result, "result");
            this.result = result;
            this.duration = j;
            this.totalBytesReceived = j5;
            this.error = str;
        }

        public /* synthetic */ OtaCheckAttempt(OtaCheckAttemptResult otaCheckAttemptResult, long j, long j5, String str, int i5, DefaultConstructorMarker defaultConstructorMarker) {
            this(otaCheckAttemptResult, j, j5, (i5 & 8) != 0 ? null : str, null);
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\b\u0082\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\f¨\u0006\r"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$OtaCheckAttemptResult;", "", "value", "", "<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "getValue", "()Ljava/lang/String;", "NOOP", "CLEARED", "SUCCESS", "SUCCESS_WITH_VERSION_REQUIRED", "FAILURE", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class OtaCheckAttemptResult {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ OtaCheckAttemptResult[] $VALUES;

        @NotNull
        private final String value;
        public static final OtaCheckAttemptResult NOOP = new OtaCheckAttemptResult("NOOP", 0, "noop");
        public static final OtaCheckAttemptResult CLEARED = new OtaCheckAttemptResult("CLEARED", 1, "clear");
        public static final OtaCheckAttemptResult SUCCESS = new OtaCheckAttemptResult("SUCCESS", 2, "success");
        public static final OtaCheckAttemptResult SUCCESS_WITH_VERSION_REQUIRED = new OtaCheckAttemptResult("SUCCESS_WITH_VERSION_REQUIRED", 3, "success");
        public static final OtaCheckAttemptResult FAILURE = new OtaCheckAttemptResult("FAILURE", 4, "failure");

        private static final /* synthetic */ OtaCheckAttemptResult[] $values() {
            return new OtaCheckAttemptResult[]{NOOP, CLEARED, SUCCESS, SUCCESS_WITH_VERSION_REQUIRED, FAILURE};
        }

        static {
            OtaCheckAttemptResult[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
        }

        private OtaCheckAttemptResult(String str, int i5, String str2) {
            this.value = str2;
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static OtaCheckAttemptResult valueOf(String str) {
            return (OtaCheckAttemptResult) Enum.valueOf(OtaCheckAttemptResult.class, str);
        }

        public static OtaCheckAttemptResult[] values() {
            return (OtaCheckAttemptResult[]) $VALUES.clone();
        }

        @NotNull
        public final String getValue() {
            return this.value;
        }
    }

    @Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\b\u0010\u0002\u001a\u00020\u0003H&¨\u0006\u0004"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$OtaMetric;", "", "toNativeMap", "Lcom/facebook/react/bridge/ReadableMap;", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface OtaMetric {
        @NotNull
        ReadableMap toNativeMap();
    }

    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005¢\u0006\u0004\b\u0007\u0010\bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\f¨\u0006\u000e"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdater$Patch;", "", "url", "", "baseFilePath", "Ljava/io/File;", "patchPath", "<init>", "(Ljava/lang/String;Ljava/io/File;Ljava/io/File;)V", "getUrl", "()Ljava/lang/String;", "getBaseFilePath", "()Ljava/io/File;", "getPatchPath", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Patch {

        @NotNull
        private final File baseFilePath;

        @NotNull
        private final File patchPath;

        @NotNull
        private final String url;

        public Patch(@NotNull String url, @NotNull File baseFilePath, @NotNull File patchPath) {
            Intrinsics.checkNotNullParameter(url, "url");
            Intrinsics.checkNotNullParameter(baseFilePath, "baseFilePath");
            Intrinsics.checkNotNullParameter(patchPath, "patchPath");
            this.url = url;
            this.baseFilePath = baseFilePath;
            this.patchPath = patchPath;
        }

        @NotNull
        public final File getBaseFilePath() {
            return this.baseFilePath;
        }

        @NotNull
        public final File getPatchPath() {
            return this.patchPath;
        }

        @NotNull
        public final String getUrl() {
            return this.url;
        }
    }

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;
        public static final /* synthetic */ int[] $EnumSwitchMapping$1;

        static {
            int[] iArr = new int[OtaCheckAttemptResult.values().length];
            try {
                iArr[OtaCheckAttemptResult.SUCCESS.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[OtaCheckAttemptResult.SUCCESS_WITH_VERSION_REQUIRED.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
            int[] iArr2 = new int[AssetStatus.values().length];
            try {
                iArr2[AssetStatus.CopyFromPrevious.ordinal()] = 1;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr2[AssetStatus.Download.ordinal()] = 2;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$1 = iArr2;
        }
    }

    static {
        y yVar = new y(1);
        yVar.h("https");
        yVar.e("discord.com");
        BASE_OTA_URL = yVar.b();
        TAG = "BundleUpdater";
    }

    private BundleUpdater(SharedPreferences sharedPreferences, File file, AssetManager assetManager, ExecutorService executorService) {
        this.sharedPreferences = sharedPreferences;
        this.filesDirectory = file;
        this.assetManager = assetManager;
        this.executor = executorService;
        this.cookieManager = l.a(new a7.a(13));
        ur.e eVar = g0.a;
        or.d dVar = q.a;
        m1 m1Var = new m1();
        dVar.getClass();
        this.coroutineScope = x.b(kotlin.coroutines.e.c(dVar, m1Var));
        final int i5 = 0;
        this.client = l.a(new Function0(this) { // from class: com.discord.bundle_updater.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ BundleUpdater f3807e;

            {
                this.f3807e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                OkHttpClient client_delegate$lambda$1;
                File otasRootDirectory_delegate$lambda$2;
                switch (i5) {
                    case 0:
                        client_delegate$lambda$1 = BundleUpdater.client_delegate$lambda$1(this.f3807e);
                        return client_delegate$lambda$1;
                    default:
                        otasRootDirectory_delegate$lambda$2 = BundleUpdater.otasRootDirectory_delegate$lambda$2(this.f3807e);
                        return otasRootDirectory_delegate$lambda$2;
                }
            }
        });
        final int i6 = 1;
        this.otasRootDirectory = l.a(new Function0(this) { // from class: com.discord.bundle_updater.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ BundleUpdater f3807e;

            {
                this.f3807e = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                OkHttpClient client_delegate$lambda$1;
                File otasRootDirectory_delegate$lambda$2;
                switch (i6) {
                    case 0:
                        client_delegate$lambda$1 = BundleUpdater.client_delegate$lambda$1(this.f3807e);
                        return client_delegate$lambda$1;
                    default:
                        otasRootDirectory_delegate$lambda$2 = BundleUpdater.otasRootDirectory_delegate$lambda$2(this.f3807e);
                        return otasRootDirectory_delegate$lambda$2;
                }
            }
        });
        this.otaMetrics = new ArrayList();
        lr.h.a.getClass();
        f.a.getClass();
        this.otaCheckTimeMark = new g(System.nanoTime() - f.f14217b);
    }

    private final OtaCheckAttempt attemptOtaUpdate() {
        CrashReporting crashReporting = CrashReporting.INSTANCE;
        String TAG2 = TAG;
        CrashReporting.addBreadcrumb$default(crashReporting, k0.d.k(TAG2, " - Downloading Manifest..."), null, null, null, false, 30, null);
        validateBuildOverrideCookie();
        if (Intrinsics.areEqual(getExistingOtaCommit(), getInProgressOtaCommit())) {
            setInProgressOtaCommit(null);
        }
        CrashReporting.addBreadcrumb$default(crashReporting, TAG2 + " - Existing OTA commit is " + getExistingOtaCommit() + ", in progress OTA commit is " + getInProgressOtaCommit(), null, null, null, false, 30, null);
        deleteUnknownOtas(getExistingOtaCommit(), getInProgressOtaCommit());
        setOtaVersion(getVersion());
        File otaTempFile = otaTempFile("manifest.json");
        String manifestURL = getManifestURL();
        String manifestETag = getManifestETag();
        if (StringsKt.K(manifestETag)) {
            manifestETag = null;
        }
        Object m254downloadSingleFilehUnOzRk$default = m254downloadSingleFilehUnOzRk$default(this, manifestURL, manifestETag != null ? b0.c(new Pair("If-None-Match", manifestETag)) : null, null, null, otaTempFile, 0, 44, null);
        Throwable a = Result.a(m254downloadSingleFilehUnOzRk$default);
        if (a == null) {
            Headers headers = (Headers) m254downloadSingleFilehUnOzRk$default;
            AppManifest manifestFromFile = BundleUpdaterUtils.INSTANCE.getManifestFromFile(otaTempFile);
            String commit = manifestFromFile.getMetadata().getCommit();
            if (Intrinsics.areEqual(commit, getExistingOtaCommit())) {
                return createOtaCheckAttempt$default(this, OtaCheckAttemptResult.NOOP, null, 2, null);
            }
            moveFile(otaTempFile, otaFile(commit, "manifest.json"));
            setInProgressOtaCommit(commit);
            String a10 = headers.a("Etag");
            setManifestETag(a10 != null ? a10 : "");
            Log log = Log.INSTANCE;
            Intrinsics.checkNotNullExpressionValue(TAG2, "TAG");
            Log.i$default(log, TAG2, e.k("Setting manifest ETag to ", getManifestETag()), (Throwable) null, 4, (Object) null);
            return downloadOtaFiles(getExistingOtaCommit(), manifestFromFile, commit);
        }
        Intrinsics.checkNotNull(a, "null cannot be cast to non-null type com.discord.bundle_updater.BundleUpdater.HttpException");
        HttpException httpException = (HttpException) a;
        int statusCode = httpException.getStatusCode();
        if (statusCode != 304) {
            if (statusCode != 404) {
                throw httpException;
            }
            CrashReporting.addBreadcrumb$default(crashReporting, k0.d.k(TAG2, " - Got 404, clearing bundle location..."), null, null, null, false, 30, null);
            setBundle(null);
            setManifestETag("");
            return createOtaCheckAttempt$default(this, OtaCheckAttemptResult.CLEARED, null, 2, null);
        }
        String inProgressOtaCommit = getInProgressOtaCommit();
        if (inProgressOtaCommit == null) {
            CrashReporting.addBreadcrumb$default(crashReporting, k0.d.l(TAG2, " - Manifest not changed, already up to date at commit ", getExistingOtaCommit()), null, null, null, false, 30, null);
            return createOtaCheckAttempt$default(this, OtaCheckAttemptResult.NOOP, null, 2, null);
        }
        CrashReporting.addBreadcrumb$default(crashReporting, TAG2 + " - Manifest not changed, resuming download of commit " + inProgressOtaCommit + ".", null, null, null, false, 30, null);
        return downloadOtaFiles(getExistingOtaCommit(), BundleUpdaterUtils.INSTANCE.getManifestFromFile(otaFile(inProgressOtaCommit, "manifest.json")), inProgressOtaCommit);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ Future checkForUpdate$default(BundleUpdater bundleUpdater, int i5, Function0 function0, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = 0;
        }
        if ((i6 & 2) != 0) {
            function0 = null;
        }
        return bundleUpdater.checkForUpdate(i5, function0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void checkForUpdate$lambda$11(int i5, BundleUpdater bundleUpdater, Function0 function0) {
        Function1<? super Boolean, Unit> function1;
        Thread.sleep(i5 * 1000);
        try {
            bundleUpdater.otaMetrics.clear();
            lr.h.a.getClass();
            f.a.getClass();
            bundleUpdater.otaCheckTimeMark = new g(System.nanoTime() - f.f14217b);
            bundleUpdater.totalBytesReceived = 0L;
            OtaCheckAttempt attemptOtaUpdate = bundleUpdater.attemptOtaUpdate();
            if (function0 != null) {
                function0.invoke();
            } else {
                int i6 = WhenMappings.$EnumSwitchMapping$0[attemptOtaUpdate.getResult().ordinal()];
                if (i6 == 1) {
                    Function1<? super Boolean, Unit> function12 = bundleUpdater.onBundleDownloadedListener;
                    if (function12 != null) {
                        function12.invoke(Boolean.FALSE);
                    }
                } else if (i6 == 2 && (function1 = bundleUpdater.onBundleDownloadedListener) != null) {
                    function1.invoke(Boolean.TRUE);
                }
            }
            bundleUpdater.trackCheckAttempt(attemptOtaUpdate);
            bundleUpdater.otaUpdateChecking = false;
        } catch (Exception e9) {
            CrashReporting.INSTANCE.captureException(e9, true);
            Log.INSTANCE.e("BundleUpdater", "Exception checking for OTA", e9);
            bundleUpdater.trackCheckAttempt(bundleUpdater.createOtaCheckAttempt(OtaCheckAttemptResult.FAILURE, e9.toString()));
            bundleUpdater.otaUpdateChecking = false;
        }
    }

    private final void clearBundle(Context context) {
        setBundle(null);
        setManifestETag("");
        createOtaCheckAttempt$default(this, OtaCheckAttemptResult.CLEARED, null, 2, null);
        x.t(this.coroutineScope, null, new BundleUpdater$clearBundle$1(context, null), 3);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final OkHttpClient client_delegate$lambda$1(final BundleUpdater bundleUpdater) {
        OkHttpClient.Builder builder = new OkHttpClient.Builder();
        builder.b(new CookieJar() { // from class: com.discord.bundle_updater.BundleUpdater$client$2$1
            @Override // okhttp3.CookieJar
            public List<Cookie> loadForRequest(HttpUrl url) {
                CookieManager cookieManager;
                Intrinsics.checkNotNullParameter(url, "url");
                cookieManager = BundleUpdater.this.getCookieManager();
                Intrinsics.checkNotNullExpressionValue(cookieManager, "access$getCookieManager(...)");
                List<Cookie> cookiesForUrl = CookieValidatorKt.getCookiesForUrl(cookieManager, url.f16038h);
                ArrayList arrayList = new ArrayList();
                for (Object obj : cookiesForUrl) {
                    if (!Intrinsics.areEqual(((Cookie) obj).a, "buildOverride")) {
                        arrayList.add(obj);
                    }
                }
                ArrayList j02 = CollectionsKt.j0(arrayList);
                Cookie buildOverrideCookie = BundleUpdater.this.getBuildOverrideCookie();
                if (buildOverrideCookie != null) {
                    j02.add(buildOverrideCookie);
                }
                return j02;
            }

            @Override // okhttp3.CookieJar
            public void saveFromResponse(HttpUrl url, List<Cookie> cookies) {
                CookieManager cookieManager;
                Intrinsics.checkNotNullParameter(url, "url");
                Intrinsics.checkNotNullParameter(cookies, "cookies");
                cookieManager = BundleUpdater.this.getCookieManager();
                cookieManager.setCookie(url.f16038h, CollectionsKt.O(cookies, "; ", null, null, null, 62));
            }
        });
        builder.c(1L, TimeUnit.MINUTES);
        final DeviceResourceUsageRecorder.Companion companion = DeviceResourceUsageRecorder.INSTANCE;
        Interceptor interceptor = new Interceptor() { // from class: com.discord.bundle_updater.BundleUpdater$client_delegate$lambda$1$$inlined$-addInterceptor$1
            @Override // okhttp3.Interceptor
            @NotNull
            public final Response intercept(@NotNull Interceptor.Chain chain) {
                Intrinsics.checkNotNullParameter(chain, "chain");
                return DeviceResourceUsageRecorder.Companion.this.bundleUpdaterInterceptor(chain);
            }
        };
        Intrinsics.checkNotNullParameter(interceptor, "interceptor");
        builder.f16054c.add(interceptor);
        return new OkHttpClient(builder);
    }

    private final OtaCheckAttempt createOtaCheckAttempt(OtaCheckAttemptResult result, String error) {
        TimeMark timeMark = this.otaCheckTimeMark;
        Intrinsics.checkNotNull(timeMark);
        return new OtaCheckAttempt(result, timeMark.a(), this.totalBytesReceived, error, null);
    }

    public static /* synthetic */ OtaCheckAttempt createOtaCheckAttempt$default(BundleUpdater bundleUpdater, OtaCheckAttemptResult otaCheckAttemptResult, String str, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            str = null;
        }
        return bundleUpdater.createOtaCheckAttempt(otaCheckAttemptResult, str);
    }

    private final void deleteUnknownOtas(String... knownOtaCommits) {
        File[] listFiles = getOtasRootDirectory().listFiles();
        if (listFiles != null) {
            for (File file : listFiles) {
                if (!kotlin.collections.x.p(file.getName(), knownOtaCommits)) {
                    CrashReporting.addBreadcrumb$default(CrashReporting.INSTANCE, TAG + " - Deleting outdated/unknown OTA at " + file.getName() + "...", null, null, null, false, 30, null);
                    Intrinsics.checkNotNull(file);
                    n.g(file);
                }
            }
        }
    }

    private final OtaCheckAttempt downloadOtaFiles(final String existingOtaCommit, AppManifest newManifest, String newOtaCommit) {
        ArrayList arrayList;
        AssetStatus assetStatus;
        boolean z5;
        final Patch patch;
        ArrayList arrayList2;
        Future<?> submit;
        Patch patch2;
        String str = newOtaCommit;
        final AppManifest appManifest = newManifest;
        List<Pair<String, AssetStatus>> compareJSONData = BundleUpdaterUtils.INSTANCE.compareJSONData(BundleUpdaterUtilsKt.getManifestFromAsset(this.assetManager, "manifest.json"), existingOtaCommit != null ? BundleUpdaterUtils.INSTANCE.getManifestFromFile(otaFile(existingOtaCommit, "manifest.json")) : null, appManifest);
        CrashReporting crashReporting = CrashReporting.INSTANCE;
        CrashReporting.addBreadcrumb$default(crashReporting, TAG + " - Found " + compareJSONData.size() + " files to copy or download...", null, null, null, false, 30, null);
        if (compareJSONData.isEmpty()) {
            CrashReporting.addBreadcrumb$default(crashReporting, "No files downloaded, returning...", null, null, null, false, 30, null);
            return createOtaCheckAttempt$default(this, OtaCheckAttemptResult.NOOP, null, 2, null);
        }
        boolean confirmUpdate = appManifest.getMetadata().getConfirmUpdate();
        Uri build = BASE_OTA_URI.buildUpon().appendPath("assets").appendPath("android").appendPath(str).build();
        ArrayList arrayList3 = new ArrayList();
        Iterator<T> it = compareJSONData.iterator();
        File file = null;
        while (it.hasNext()) {
            Pair pair = (Pair) it.next();
            final String str2 = (String) pair.f13474d;
            AssetStatus assetStatus2 = (AssetStatus) pair.f13475e;
            final String l6 = kotlin.text.x.l(str2, "/res/", "/assets/", false);
            final Uri build2 = build.buildUpon().appendEncodedPath(str2).build();
            boolean D = StringsKt.D(str2, ANDROID_JS_BUNDLE_ASSET_NAME, false);
            String str3 = appManifest.getPatches().get(str2);
            if (str3 != null) {
                if (D) {
                    File otaTempFile = otaTempFile(k0.d.k(l6, ".base"));
                    arrayList = arrayList3;
                    File otaTempFile2 = otaTempFile(k0.d.k(l6, ".patch"));
                    InputStream open = this.assetManager.open(ANDROID_JS_BUNDLE_ASSET_NAME);
                    try {
                        assetStatus = assetStatus2;
                        FileOutputStream fileOutputStream = new FileOutputStream(ensureEmptyFile(otaTempFile));
                        try {
                            Intrinsics.checkNotNull(open);
                            com.facebook.imagepipeline.nativecode.b.h(open, fileOutputStream, 8192);
                            fileOutputStream.close();
                            open.close();
                            String uri = build.buildUpon().appendEncodedPath(str3).build().toString();
                            Intrinsics.checkNotNullExpressionValue(uri, "toString(...)");
                            patch2 = new Patch(uri, otaTempFile, otaTempFile2);
                        } finally {
                        }
                    } finally {
                    }
                } else {
                    arrayList = arrayList3;
                    assetStatus = assetStatus2;
                    patch2 = null;
                }
                z5 = D;
                patch = patch2;
            } else {
                arrayList = arrayList3;
                assetStatus = assetStatus2;
                z5 = D;
                patch = null;
            }
            final File otaTempFile3 = otaTempFile(l6);
            final File otaFile = otaFile(str, l6);
            File file2 = z5 ? otaFile : file;
            if (otaFile.exists()) {
                arrayList2 = arrayList;
                submit = null;
            } else {
                arrayList2 = arrayList;
                final AssetStatus assetStatus3 = assetStatus;
                submit = this.executor.submit(new Runnable() { // from class: com.discord.bundle_updater.b
                    @Override // java.lang.Runnable
                    public final void run() {
                        BundleUpdater.downloadOtaFiles$lambda$21$lambda$20(AssetStatus.this, this, existingOtaCommit, l6, otaTempFile3, build2, appManifest, str2, patch, otaFile);
                    }
                });
            }
            if (submit != null) {
                arrayList2.add(submit);
            }
            appManifest = newManifest;
            arrayList3 = arrayList2;
            file = file2;
            str = newOtaCommit;
        }
        try {
            Iterator it2 = arrayList3.iterator();
            while (it2.hasNext()) {
                ((Future) it2.next()).get();
            }
            setBundle(file != null ? new OtaBundle(file, newManifest.getMetadata().getReleaseName()) : null);
            setInProgressOtaCommit(null);
            CrashReporting.addBreadcrumb$default(CrashReporting.INSTANCE, k0.d.k(TAG, " - Done downloading OTA..."), null, null, null, false, 30, null);
            return createOtaCheckAttempt$default(this, confirmUpdate ? OtaCheckAttemptResult.SUCCESS_WITH_VERSION_REQUIRED : OtaCheckAttemptResult.SUCCESS, null, 2, null);
        } catch (ExecutionException e9) {
            Throwable cause = e9.getCause();
            if (cause == null || !isNetworkException(cause)) {
                throw e9;
            }
            Log log = Log.INSTANCE;
            String TAG2 = TAG;
            Intrinsics.checkNotNullExpressionValue(TAG2, "TAG");
            log.e(TAG2, "Network error while downloading OTA files: " + cause.getMessage(), cause);
            return createOtaCheckAttempt(OtaCheckAttemptResult.FAILURE, cause.toString());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void downloadOtaFiles$lambda$21$lambda$20(AssetStatus assetStatus, BundleUpdater bundleUpdater, String str, String str2, File file, Uri uri, AppManifest appManifest, String str3, Patch patch, File file2) {
        int i5 = WhenMappings.$EnumSwitchMapping$1[assetStatus.ordinal()];
        if (i5 == 1) {
            Intrinsics.checkNotNull(str);
            n.f(bundleUpdater.otaFile(str, str2), file);
        } else {
            if (i5 != 2) {
                throw new fo.n();
            }
            String uri2 = uri.toString();
            Intrinsics.checkNotNullExpressionValue(uri2, "toString(...)");
            ki.b.R(m254downloadSingleFilehUnOzRk$default(bundleUpdater, uri2, null, appManifest.getHashes().get(str3), patch, file, 0, 34, null));
        }
        bundleUpdater.moveFile(file, file2);
    }

    /* JADX WARN: Code restructure failed: missing block: B:94:0x015e, code lost:
    
        if (r0 == null) goto L53;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r12v14 */
    /* JADX WARN: Type inference failed for: r12v2, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r12v4 */
    /* JADX WARN: Type inference failed for: r12v6 */
    /* JADX WARN: Type inference failed for: r9v8, types: [okhttp3.Response] */
    /* renamed from: downloadSingleFile-hUnOzRk, reason: not valid java name */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final Object m253downloadSingleFilehUnOzRk(String url, List<Pair<String, String>> extraHeaders, String hash, Patch patch, File destinationFile, int attempt) {
        String str;
        Map<String, String> map;
        ?? r12;
        Throwable th2;
        long contentLength;
        Throwable th3;
        File patchPath;
        String str2;
        lr.h.a.getClass();
        f.a.getClass();
        long nanoTime = System.nanoTime() - f.f14217b;
        if (attempt >= 3) {
            trackAssetDownload$default(this, OtaAssetDownloadAttemptResult.FAILURE, url, new g(nanoTime), null, null, "max_download_attempts", 24, null);
            throw new MaxDownloadAttemptsException(url, attempt);
        }
        if (patch == null || (str = patch.getUrl()) == null) {
            str = url;
        }
        Log log = Log.INSTANCE;
        String TAG2 = TAG;
        Intrinsics.checkNotNullExpressionValue(TAG2, "TAG");
        Log.i$default(log, TAG2, "Downloading to " + destinationFile + " url: " + str, (Throwable) null, 4, (Object) null);
        Map g6 = v0.g(new Pair("Accept", "application/gzip"), new Pair("Accept-Encoding", "gzip"));
        List<Pair<String, String>> pairs = extraHeaders == null ? m0.f13512d : extraHeaders;
        Intrinsics.checkNotNullParameter(g6, "<this>");
        Intrinsics.checkNotNullParameter(pairs, "pairs");
        if (g6.isEmpty()) {
            map = v0.m(pairs);
        } else {
            LinkedHashMap linkedHashMap = new LinkedHashMap(g6);
            v0.l(linkedHashMap, pairs);
            map = linkedHashMap;
        }
        ?? downloadBlob = FileDownloader.INSTANCE.downloadBlob(str, map, getClient());
        try {
            ResponseBody responseBody = downloadBlob.f16091y;
            Headers headers = downloadBlob.f16090x;
            int i5 = downloadBlob.f16088v;
            if (responseBody != null) {
                try {
                    contentLength = responseBody.contentLength();
                } catch (Throwable th4) {
                    th2 = th4;
                    r12 = downloadBlob;
                    try {
                        throw th2;
                    } catch (Throwable th5) {
                        com.facebook.imagepipeline.nativecode.c.j(r12, th2);
                        throw th5;
                    }
                }
            } else {
                contentLength = 0;
            }
            long j = contentLength;
            try {
                this.totalBytesReceived += j;
            } catch (Throwable th6) {
                th = th6;
                TAG2 = downloadBlob;
            }
            try {
                if (!downloadBlob.g()) {
                    OtaAssetDownloadAttemptResult otaAssetDownloadAttemptResult = OtaAssetDownloadAttemptResult.FAILURE;
                    g gVar = new g(nanoTime);
                    Long valueOf = Long.valueOf(j);
                    Integer valueOf2 = Integer.valueOf(i5);
                    Intrinsics.checkNotNull(responseBody);
                    trackAssetDownload(otaAssetDownloadAttemptResult, url, gVar, valueOf, valueOf2, responseBody.string());
                    if (500 <= i5 && i5 < 600) {
                        Object m253downloadSingleFilehUnOzRk = m253downloadSingleFilehUnOzRk(url, extraHeaders, hash, patch, destinationFile, attempt + 1);
                        downloadBlob.close();
                        return m253downloadSingleFilehUnOzRk;
                    }
                    fo.q qVar = Result.f13476e;
                    r i6 = ki.b.i(new HttpException(i5));
                    downloadBlob.close();
                    return i6;
                }
                Intrinsics.checkNotNull(responseBody);
                Intrinsics.checkNotNullExpressionValue(TAG2, "TAG");
                Log.i$default(log, TAG2, "Downloading file to " + destinationFile + "...", (Throwable) null, 4, (Object) null);
                et.r d6 = et.y.d(Intrinsics.areEqual(headers.a("content-encoding"), "gzip") ? new k(responseBody.source()) : responseBody.source());
                try {
                    if (patch != null) {
                        try {
                            patchPath = patch.getPatchPath();
                        } catch (Throwable th7) {
                            th3 = th7;
                            TAG2 = downloadBlob;
                            try {
                                throw th3;
                            } catch (Throwable th8) {
                                com.facebook.imagepipeline.nativecode.c.j(d6, th3);
                                throw th8;
                            }
                        }
                    }
                    patchPath = destinationFile;
                    try {
                        et.q c6 = et.y.c(et.y.k(ensureEmptyFile(patchPath)));
                        try {
                            c6.J(d6);
                            c6.close();
                            d6.close();
                            if (patch != null) {
                                try {
                                    CrashReporting crashReporting = CrashReporting.INSTANCE;
                                    CrashReporting.addBreadcrumb$default(crashReporting, TAG2 + " - Patching file: " + destinationFile, null, null, null, false, 30, null);
                                    ensureEmptyFile(destinationFile);
                                    BSDiff.INSTANCE.bspatchStreaming(patch.getBaseFilePath(), patch.getPatchPath(), destinationFile);
                                    patch.getBaseFilePath().delete();
                                    patch.getPatchPath().delete();
                                    CrashReporting.addBreadcrumb$default(crashReporting, TAG2 + " - Patched file: " + destinationFile, null, null, null, false, 30, null);
                                } catch (Exception e9) {
                                    CrashReporting.captureException$default(CrashReporting.INSTANCE, e9, false, 2, null);
                                }
                            }
                            if (destinationFile.exists() && (hash == null || Intrinsics.areEqual(hash, BundleUpdaterUtils.INSTANCE.md5(destinationFile)))) {
                                Log log2 = Log.INSTANCE;
                                String TAG3 = TAG;
                                Intrinsics.checkNotNullExpressionValue(TAG3, "TAG");
                                Log.i$default(log2, TAG3, "Downloading file to " + destinationFile + "...success! Invoking onSuccess...", (Throwable) null, 4, (Object) null);
                                trackAssetDownload$default(this, OtaAssetDownloadAttemptResult.SUCCESS, url, new g(nanoTime), Long.valueOf(j), Integer.valueOf(i5), null, 32, null);
                                fo.q qVar2 = Result.f13476e;
                                downloadBlob.close();
                                return headers;
                            }
                            CrashReporting crashReporting2 = CrashReporting.INSTANCE;
                            String TAG4 = TAG;
                            Intrinsics.checkNotNullExpressionValue(TAG4, "TAG");
                            CrashReporting.captureMessage$default(crashReporting2, TAG4, "Failed to validate file: " + destinationFile + ", retrying full download...", null, 4, null);
                            trackAssetDownload(OtaAssetDownloadAttemptResult.FAILURE, url, new g(nanoTime), Long.valueOf(j), Integer.valueOf(i5), "validation_failed");
                            Object m253downloadSingleFilehUnOzRk2 = m253downloadSingleFilehUnOzRk(url, extraHeaders, hash, null, destinationFile, attempt + 1);
                            downloadBlob.close();
                            return m253downloadSingleFilehUnOzRk2;
                        } catch (Throwable th9) {
                            str2 = downloadBlob;
                            try {
                                throw th9;
                            } catch (Throwable th10) {
                                try {
                                    com.facebook.imagepipeline.nativecode.c.j(c6, th9);
                                    throw th10;
                                } catch (Throwable th11) {
                                    th = th11;
                                    th3 = th;
                                    TAG2 = str2;
                                    throw th3;
                                }
                            }
                        }
                    } catch (Throwable th12) {
                        th = th12;
                        str2 = downloadBlob;
                    }
                } catch (Throwable th13) {
                    th = th13;
                    th2 = th;
                    r12 = TAG2;
                    throw th2;
                }
            } catch (Throwable th14) {
                th2 = th14;
                r12 = downloadBlob;
                throw th2;
            }
        } catch (Throwable th15) {
            th = th15;
            TAG2 = downloadBlob;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* renamed from: downloadSingleFile-hUnOzRk$default, reason: not valid java name */
    public static /* synthetic */ Object m254downloadSingleFilehUnOzRk$default(BundleUpdater bundleUpdater, String str, List list, String str2, Patch patch, File file, int i5, int i6, Object obj) {
        if ((i6 & 2) != 0) {
            list = null;
        }
        if ((i6 & 4) != 0) {
            str2 = null;
        }
        if ((i6 & 8) != 0) {
            patch = null;
        }
        if ((i6 & 32) != 0) {
            i5 = 0;
        }
        return bundleUpdater.m253downloadSingleFilehUnOzRk(str, list, str2, patch, file, i5);
    }

    private final File ensureEmptyFile(File file) {
        File absoluteFile;
        File parentFile = file.getParentFile();
        boolean mkdirs = parentFile != null ? parentFile.mkdirs() : false;
        if (file.exists()) {
            file.delete();
        }
        try {
            file.createNewFile();
            return file;
        } catch (Exception e9) {
            CrashReporting crashReporting = CrashReporting.INSTANCE;
            String f2 = h.f("Failed to create file: ", file.getAbsolutePath(), ". ");
            File parentFile2 = file.getParentFile();
            Pair pair = new Pair("Parent path", String.valueOf(parentFile2 != null ? parentFile2.getPath() : null));
            File parentFile3 = file.getParentFile();
            Pair pair2 = new Pair("Parent absolute path", String.valueOf(parentFile3 != null ? parentFile3.getAbsolutePath() : null));
            File parentFile4 = file.getParentFile();
            Pair pair3 = new Pair("Parent absolute file path", String.valueOf((parentFile4 == null || (absoluteFile = parentFile4.getAbsoluteFile()) == null) ? null : absoluteFile.getPath()));
            Pair pair4 = new Pair("Directories created", String.valueOf(mkdirs));
            File parentFile5 = file.getParentFile();
            CrashReporting.addBreadcrumb$default(crashReporting, f2, v0.g(pair, pair2, pair3, pair4, new Pair("Parent directory exists", String.valueOf(parentFile5 != null ? Boolean.valueOf(parentFile5.exists()) : null))), null, null, false, 28, null);
            throw e9;
        }
    }

    private final OkHttpClient getClient() {
        return (OkHttpClient) this.client.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final CookieManager getCookieManager() {
        return (CookieManager) this.cookieManager.getValue();
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x00bd  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x00a9  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final String getExistingOtaCommit() {
        File location;
        String sb2;
        OtaBundle bundle = getBundle();
        if (bundle != null && (location = bundle.getLocation()) != null) {
            File base = getOtasRootDirectory();
            Intrinsics.checkNotNullParameter(location, "<this>");
            Intrinsics.checkNotNullParameter(base, "base");
            qo.c h6 = n.h(qo.k.a(location));
            List list = h6.f16916b;
            qo.c h7 = n.h(qo.k.a(base));
            List list2 = h7.f16916b;
            if (Intrinsics.areEqual(h6.a, h7.a)) {
                int size = list2.size();
                int size2 = list.size();
                int min = Math.min(size2, size);
                int i5 = 0;
                while (i5 < min && Intrinsics.areEqual(list.get(i5), list2.get(i5))) {
                    i5++;
                }
                StringBuilder sb3 = new StringBuilder();
                int i6 = size - 1;
                if (i5 <= i6) {
                    while (!Intrinsics.areEqual(((File) list2.get(i6)).getName(), "..")) {
                        sb3.append("..");
                        if (i6 != i5) {
                            sb3.append(File.separatorChar);
                        }
                        if (i6 != i5) {
                            i6--;
                        }
                    }
                }
                if (i5 < size2) {
                    if (i5 < size) {
                        sb3.append(File.separatorChar);
                    }
                    List F = CollectionsKt.F(i5, list);
                    String separator = File.separator;
                    Intrinsics.checkNotNullExpressionValue(separator, "separator");
                    CollectionsKt.N(F, sb3, separator, null, null, null, 124);
                }
                sb2 = sb3.toString();
                if (sb2 != null) {
                    throw new IllegalArgumentException("this and base files have different roots: " + location + " and " + base + '.');
                }
                List S = StringsKt.S(sb2, new char[]{File.separatorChar});
                if (S != null) {
                    return (String) CollectionsKt.firstOrNull(S);
                }
            }
            sb2 = null;
            if (sb2 != null) {
            }
        }
        return null;
    }

    private final String getInProgressOtaCommit() {
        return this.sharedPreferences.getString(KEY_IN_PROGRESS_OTA_COMMIT, null);
    }

    private final String getManifestURL() {
        String uri = BASE_OTA_URI.buildUpon().appendPath("android").appendPath(getVersion()).appendPath("manifest.json").build().toString();
        Intrinsics.checkNotNullExpressionValue(uri, "toString(...)");
        return uri;
    }

    private final boolean getValidOTAVersion() {
        return Intrinsics.areEqual(getOtaVersion(), getVersion());
    }

    private final String getVersion() {
        return ClientInfo.INSTANCE.getVersionName();
    }

    private final boolean isNetworkException(Throwable throwable) {
        return (throwable instanceof SocketTimeoutException) || (throwable instanceof ConnectException) || (throwable instanceof SocketException) || (throwable instanceof UnknownHostException) || (throwable instanceof SSLException) || (throwable instanceof IOException) || (throwable instanceof MaxDownloadAttemptsException);
    }

    private final void moveFile(File src, File dst) {
        File parentFile = dst.getParentFile();
        if (parentFile != null) {
            parentFile.mkdirs();
        }
        src.renameTo(dst);
    }

    private final File otaFile(String commit, String file) {
        return new File(new File(getOtasRootDirectory(), commit), file);
    }

    private final File otaTempFile(String file) {
        return otaFile("temp", file);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final File otasRootDirectory_delegate$lambda$2(BundleUpdater bundleUpdater) {
        return new File(bundleUpdater.filesDirectory.getAbsolutePath(), OTAS_DIRECTORY);
    }

    private final void setInProgressOtaCommit(String str) {
        SharedPreferences.Editor edit = this.sharedPreferences.edit();
        edit.putString(KEY_IN_PROGRESS_OTA_COMMIT, str);
        edit.apply();
    }

    private final void setManifestETag(String str) {
        SharedPreferences.Editor edit = this.sharedPreferences.edit();
        edit.putString(KEY_ETAG, str);
        edit.apply();
    }

    private final void setOtaVersion(String str) {
        SharedPreferences.Editor edit = this.sharedPreferences.edit();
        edit.putString(KEY_OTA_VERSION, str);
        edit.apply();
    }

    private final void trackAssetDownload(OtaAssetDownloadAttemptResult result, String url, TimeMark startMark, Long bytesReceived, Integer statusCode, String error) {
        this.otaMetrics.add(new OtaAssetDownloadAttempt(result, url, new Duration(startMark.a()), bytesReceived, statusCode, error, null));
    }

    public static /* synthetic */ void trackAssetDownload$default(BundleUpdater bundleUpdater, OtaAssetDownloadAttemptResult otaAssetDownloadAttemptResult, String str, TimeMark timeMark, Long l6, Integer num, String str2, int i5, Object obj) {
        if ((i5 & 8) != 0) {
            l6 = null;
        }
        if ((i5 & 16) != 0) {
            num = null;
        }
        if ((i5 & 32) != 0) {
            str2 = null;
        }
        bundleUpdater.trackAssetDownload(otaAssetDownloadAttemptResult, str, timeMark, l6, num, str2);
    }

    private final void trackCheckAttempt(OtaCheckAttempt result) {
        this.otaMetrics.add(result);
        Function1<? super List<? extends OtaMetric>, Unit> function1 = this.onOtaUpdateCheckedListener;
        if (function1 != null) {
            function1.invoke(this.otaMetrics);
        }
    }

    private final void validateBuildOverrideCookie() {
        if (CookieValidator.INSTANCE.validateBuildOverrideCookie(getBuildOverrideCookie(), getVersion())) {
            return;
        }
        setBuildOverrideCookieHeader("");
    }

    public final Future<?> checkForUpdate(int delaySeconds, Function0<Unit> onComplete) {
        if (this.otaUpdateChecking) {
            return null;
        }
        return this.executor.submit(new bb.a(delaySeconds, this, onComplete));
    }

    public final Cookie getBuildOverrideCookie() {
        Pattern pattern = Cookie.j;
        return com.facebook.imagepipeline.nativecode.b.v(BASE_OTA_URL, getBuildOverrideCookieHeader());
    }

    @NotNull
    public final String getBuildOverrideCookieHeader() {
        String string = this.sharedPreferences.getString(KEY_BUILD_OVERRIDE_COOKIE_HEADER, "");
        return string == null ? "" : string;
    }

    public final OtaBundle getBundle() {
        SharedPreferences sharedPreferences = this.sharedPreferences;
        String string = sharedPreferences.getString(KEY_ANDROID_JS_BUNDLE, null);
        OtaBundle otaBundle = string != null ? new OtaBundle(new File(string), sharedPreferences.getString(KEY_ANDROID_JS_BUNDLE_RELEASE_NAME, null)) : null;
        if (otaBundle != null && otaBundle.getLocation().exists() && getValidOTAVersion()) {
            return otaBundle;
        }
        return null;
    }

    @NotNull
    public final String getManifestETag() {
        String string = this.sharedPreferences.getString(KEY_ETAG, "");
        return string == null ? "" : string;
    }

    public final Function1<Boolean, Unit> getOnBundleDownloadedListener() {
        return this.onBundleDownloadedListener;
    }

    public final Function1<List<? extends OtaMetric>, Unit> getOnOtaUpdateCheckedListener() {
        return this.onOtaUpdateCheckedListener;
    }

    @NotNull
    public final List<OtaMetric> getOtaMetrics() {
        return this.otaMetrics;
    }

    @NotNull
    public final String getOtaVersion() {
        String string = this.sharedPreferences.getString(KEY_OTA_VERSION, "");
        return string == null ? "" : string;
    }

    @NotNull
    public final File getOtasRootDirectory() {
        return (File) this.otasRootDirectory.getValue();
    }

    public final void handleIntent(@NotNull Context context, @NotNull Intent intent) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(intent, "intent");
        if (Intrinsics.areEqual(intent.getAction(), CLEAR_BUILD_OVERRIDE)) {
            clearBundle(context);
        }
    }

    /* renamed from: isVersionRequired, reason: from getter */
    public final boolean getIsVersionRequired() {
        return this.isVersionRequired;
    }

    public final ManifestInfo manifestInfo() {
        String existingOtaCommit = getExistingOtaCommit();
        AppManifest manifestFromFile = existingOtaCommit != null ? BundleUpdaterUtils.INSTANCE.getManifestFromFile(otaFile(existingOtaCommit, "manifest.json")) : null;
        if (manifestFromFile != null) {
            return new ManifestInfo("OTA", manifestFromFile.getMetadata());
        }
        try {
            return new ManifestInfo("Bundle", BundleUpdaterUtilsKt.getManifestFromAsset(this.assetManager, "manifest.json").getMetadata());
        } catch (Exception unused) {
            return null;
        }
    }

    public final void setBuildOverrideCookieHeader(@NotNull String cookieHeader) {
        Intrinsics.checkNotNullParameter(cookieHeader, "cookieHeader");
        SharedPreferences.Editor edit = this.sharedPreferences.edit();
        edit.putString(KEY_BUILD_OVERRIDE_COOKIE_HEADER, cookieHeader);
        edit.apply();
    }

    public final void setBundle(OtaBundle otaBundle) {
        File location;
        SharedPreferences.Editor edit = this.sharedPreferences.edit();
        edit.putString(KEY_ANDROID_JS_BUNDLE, (otaBundle == null || (location = otaBundle.getLocation()) == null) ? null : location.getAbsolutePath());
        edit.putString(KEY_ANDROID_JS_BUNDLE_RELEASE_NAME, otaBundle != null ? otaBundle.getReleaseName() : null);
        edit.apply();
    }

    public final void setOnBundleDownloadedListener(Function1<? super Boolean, Unit> function1) {
        this.onBundleDownloadedListener = function1;
    }

    public final void setOnOtaUpdateCheckedListener(Function1<? super List<? extends OtaMetric>, Unit> function1) {
        this.onOtaUpdateCheckedListener = function1;
    }

    public /* synthetic */ BundleUpdater(SharedPreferences sharedPreferences, File file, AssetManager assetManager, ExecutorService executorService, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(sharedPreferences, file, assetManager, (i5 & 8) != 0 ? Executors.newFixedThreadPool(5) : executorService);
    }
}
