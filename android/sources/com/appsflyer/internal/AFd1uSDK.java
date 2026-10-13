package com.appsflyer.internal;

import android.content.Context;
import com.appsflyer.AFLogger;
import com.appsflyer.internal.AFc1cSDK;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c1;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@SourceDebugExtension({"SMAP\nExceptionManageCacheImpl.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ExceptionManageCacheImpl.kt\ncom/appsflyer/internal/components/monitorsdk/exmanager/ExceptionManageCacheImpl\n+ 2 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,130:1\n11653#2,9:131\n13579#2:140\n11653#2,9:141\n13579#2:150\n13580#2:152\n11662#2:153\n13580#2:155\n11662#2:156\n4117#2:158\n4217#2,2:159\n4117#2:165\n4217#2,2:166\n1#3:151\n1#3:154\n1#3:157\n1549#4:161\n1620#4,3:162\n1549#4:168\n1620#4,3:169\n*S KotlinDebug\n*F\n+ 1 ExceptionManageCacheImpl.kt\ncom/appsflyer/internal/components/monitorsdk/exmanager/ExceptionManageCacheImpl\n*L\n69#1:131,9\n69#1:140\n71#1:141,9\n71#1:150\n71#1:152\n71#1:153\n69#1:155\n69#1:156\n101#1:158\n101#1:159,2\n119#1:165\n119#1:166,2\n71#1:151\n69#1:154\n101#1:161\n101#1:162,3\n120#1:168\n120#1:169,3\n*E\n"})
/* loaded from: classes.dex */
public final class AFd1uSDK implements AFd1zSDK {

    @NotNull
    private final AFc1gSDK getCurrencyIso4217Code;

    public AFd1uSDK(@NotNull AFc1gSDK aFc1gSDK) {
        Intrinsics.checkNotNullParameter(aFc1gSDK, "");
        this.getCurrencyIso4217Code = aFc1gSDK;
    }

    private final File getMonetizationNetwork() {
        Context context = this.getCurrencyIso4217Code.getRevenue;
        if (context == null) {
            return null;
        }
        File file = new File(context.getFilesDir(), "AFExceptionsCache");
        if (!file.exists()) {
            file.mkdirs();
        }
        return file;
    }

    @Override // com.appsflyer.internal.AFd1zSDK
    public final int AFAdRevenueData() {
        Iterator<T> it = getMediationNetwork().iterator();
        int i5 = 0;
        while (it.hasNext()) {
            i5 += ((AFc1cSDK) it.next()).getMonetizationNetwork;
        }
        return i5;
    }

    @Override // com.appsflyer.internal.AFd1zSDK
    public final boolean getCurrencyIso4217Code() {
        return getCurrencyIso4217Code(new String[0]);
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x006c A[Catch: all -> 0x0070, TryCatch #0 {all -> 0x0070, blocks: (B:3:0x0001, B:5:0x0008, B:7:0x000e, B:9:0x0018, B:23:0x006c, B:25:0x0072, B:30:0x004a, B:32:0x0075, B:34:0x007b, B:11:0x001a, B:13:0x0020, B:15:0x002e, B:17:0x0041), top: B:2:0x0001, inners: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0072 A[SYNTHETIC] */
    @Override // com.appsflyer.internal.AFd1zSDK
    @NotNull
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List<AFc1cSDK> getMediationNetwork() {
        List<AFc1cSDK> list;
        File[] listFiles;
        ArrayList arrayList;
        File[] listFiles2;
        synchronized (this) {
            try {
                File monetizationNetwork = getMonetizationNetwork();
                list = null;
                if (monetizationNetwork != null && (listFiles = monetizationNetwork.listFiles()) != null) {
                    ArrayList arrayList2 = new ArrayList();
                    for (File file : listFiles) {
                        try {
                            listFiles2 = file.listFiles();
                        } catch (Throwable th2) {
                            AFh1ySDK.v$default(AFLogger.INSTANCE, AFg1cSDK.EXCEPTION_MANAGER, "Could not get stored exceptions\n " + th2.getMessage(), false, 4, null);
                        }
                        if (listFiles2 != null) {
                            Intrinsics.checkNotNullExpressionValue(listFiles2, "");
                            arrayList = new ArrayList();
                            for (File file2 : listFiles2) {
                                AFc1cSDK.Companion companion = AFc1cSDK.INSTANCE;
                                Intrinsics.checkNotNullExpressionValue(file2, "");
                                AFc1cSDK currencyIso4217Code = AFc1cSDK.Companion.getCurrencyIso4217Code(qo.l.c(file2));
                                if (currencyIso4217Code != null) {
                                    arrayList.add(currencyIso4217Code);
                                }
                            }
                            if (arrayList == null) {
                                arrayList2.add(arrayList);
                            }
                        }
                        arrayList = null;
                        if (arrayList == null) {
                        }
                    }
                    list = d0.m(arrayList2);
                }
                if (list == null) {
                    list = m0.f13512d;
                }
            } catch (Throwable th3) {
                throw th3;
            }
        }
        return list;
    }

    @Override // com.appsflyer.internal.AFd1zSDK
    public final String getRevenue(@NotNull Throwable th2, @NotNull String str) {
        String str2;
        File file;
        Intrinsics.checkNotNullParameter(th2, "");
        Intrinsics.checkNotNullParameter(str, "");
        synchronized (this) {
            File monetizationNetwork = getMonetizationNetwork();
            str2 = null;
            if (monetizationNetwork != null) {
                file = new File(monetizationNetwork, "6.17.3");
                if (!file.exists()) {
                    file.mkdirs();
                }
            } else {
                file = null;
            }
            if (file != null) {
                try {
                    AFc1cSDK AFAdRevenueData = AFd1pSDK.AFAdRevenueData(th2, str);
                    String str3 = AFAdRevenueData.getCurrencyIso4217Code;
                    File file2 = new File(file, str3);
                    if (file2.exists()) {
                        AFc1cSDK.Companion companion = AFc1cSDK.INSTANCE;
                        AFc1cSDK currencyIso4217Code = AFc1cSDK.Companion.getCurrencyIso4217Code(qo.l.c(file2));
                        if (currencyIso4217Code != null) {
                            currencyIso4217Code.getMonetizationNetwork++;
                            AFAdRevenueData = currencyIso4217Code;
                        }
                    }
                    qo.l.d(file2, AFAdRevenueData.getMediationNetwork());
                    str2 = str3;
                } catch (Exception e9) {
                    AFh1ySDK.v$default(AFLogger.INSTANCE, AFg1cSDK.EXCEPTION_MANAGER, "Could not cache exception\n " + e9.getMessage(), false, 4, null);
                }
            }
        }
        return str2;
    }

    @Override // com.appsflyer.internal.AFd1zSDK
    public final boolean getCurrencyIso4217Code(@NotNull String... strArr) {
        boolean z5;
        Intrinsics.checkNotNullParameter(strArr, "");
        synchronized (this) {
            try {
                File monetizationNetwork = getMonetizationNetwork();
                z5 = true;
                if (monetizationNetwork != null) {
                    if (strArr.length == 0) {
                        AFh1ySDK.v$default(AFLogger.INSTANCE, AFg1cSDK.EXCEPTION_MANAGER, "delete all exceptions", false, 4, null);
                        z5 = qo.n.g(monetizationNetwork);
                    } else {
                        AFh1ySDK.v$default(AFLogger.INSTANCE, AFg1cSDK.EXCEPTION_MANAGER, "delete all exceptions except for: " + x.A(strArr, ", ", null, null, null, 62), false, 4, null);
                        File[] listFiles = monetizationNetwork.listFiles();
                        if (listFiles != null) {
                            Intrinsics.checkNotNullExpressionValue(listFiles, "");
                            ArrayList arrayList = new ArrayList();
                            for (File file : listFiles) {
                                if (!x.p(file.getName(), strArr)) {
                                    arrayList.add(file);
                                }
                            }
                            ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
                            Iterator it = arrayList.iterator();
                            while (it.hasNext()) {
                                File file2 = (File) it.next();
                                Intrinsics.checkNotNullExpressionValue(file2, "");
                                arrayList2.add(Boolean.valueOf(qo.n.g(file2)));
                            }
                            Set l02 = CollectionsKt.l0(arrayList2);
                            if (l02.isEmpty()) {
                                l02 = c1.b(Boolean.TRUE);
                            }
                            Set set = l02;
                            if (set.size() != 1 || !((Boolean) CollectionsKt.J(set)).booleanValue()) {
                                z5 = false;
                            }
                        }
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return z5;
    }

    @Override // com.appsflyer.internal.AFd1zSDK
    public final void getMediationNetwork(int i5, int i6) {
        File[] listFiles;
        synchronized (this) {
            try {
                File monetizationNetwork = getMonetizationNetwork();
                if (monetizationNetwork != null && (listFiles = monetizationNetwork.listFiles()) != null) {
                    Intrinsics.checkNotNullExpressionValue(listFiles, "");
                    ArrayList<File> arrayList = new ArrayList();
                    for (File file : listFiles) {
                        String name = file.getName();
                        Intrinsics.checkNotNullExpressionValue(name, "");
                        int mediationNetwork = AFk1zSDK.getMediationNetwork(name);
                        if (i5 > mediationNetwork || mediationNetwork > i6) {
                            arrayList.add(file);
                        }
                    }
                    ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
                    for (File file2 : arrayList) {
                        Intrinsics.checkNotNullExpressionValue(file2, "");
                        arrayList2.add(Boolean.valueOf(qo.n.g(file2)));
                    }
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
