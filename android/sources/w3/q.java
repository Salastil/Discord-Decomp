package w3;

import android.app.ActivityManager;
import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import androidx.core.view.b1;
import androidx.work.impl.WorkDatabase;
import bg.y0;
import com.discord.R;
import com.discord.jank_stats.JankScreenContext;
import com.facebook.fresco.animation.factory.AnimatedFactoryV2Impl;
import hc.g1;
import java.io.File;
import java.io.FileNotFoundException;
import java.net.ProtocolException;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.Executor;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.ranges.IntRange;
import kotlin.text.StringsKt;
import kotlin.text.x;
import ps.s;

/* loaded from: classes.dex */
public abstract class q implements b1 {
    public static boolean a;

    /* renamed from: b, reason: collision with root package name */
    public static AnimatedFactoryV2Impl f19670b;

    /* renamed from: c, reason: collision with root package name */
    public static volatile JankScreenContext f19671c;

    public static int A(long j) {
        if (j < -2147483648L || j > 2147483647L) {
            throw new ArithmeticException(k0.d.j(j, "Out of range: "));
        }
        return (int) j;
    }

    public static long B(long j, long j5) {
        if (j5 == 1) {
            return j;
        }
        if (j5 <= 0 ? j5 >= -1 ? !(j5 == -1 && j == Long.MIN_VALUE) : j <= Long.MIN_VALUE / j5 && j >= LongCompanionObject.MAX_VALUE / j5 : j <= LongCompanionObject.MAX_VALUE / j5 && j >= Long.MIN_VALUE / j5) {
            return j * j5;
        }
        StringBuilder sb2 = new StringBuilder(32);
        sb2.append("Long overflow: (");
        sb2.append(j);
        sb2.append(',');
        sb2.append(j5);
        sb2.append(')');
        throw new ArithmeticException(sb2.toString());
    }

    public static int C(int i5, int i6) {
        if (i6 == 0) {
            return i5;
        }
        long j = i5 - i6;
        if (j >= -2147483648L && j <= 2147483647L) {
            return (int) j;
        }
        StringBuilder sb2 = new StringBuilder(32);
        sb2.append("Integer overflow: (");
        sb2.append(i5);
        sb2.append(',');
        sb2.append(i6);
        sb2.append(')');
        throw new ArithmeticException(sb2.toString());
    }

    public static long D(long j, long j5) {
        if (j5 == 0) {
            return j;
        }
        if (j5 <= 0 ? j <= LongCompanionObject.MAX_VALUE + j5 : j >= Long.MIN_VALUE + j5) {
            return j - j5;
        }
        StringBuilder sb2 = new StringBuilder(32);
        sb2.append("Long overflow: (");
        sb2.append(j);
        sb2.append(',');
        sb2.append(j5);
        sb2.append(')');
        throw new ArithmeticException(sb2.toString());
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x003b, code lost:
    
        if (r0.charAt(r1.length()) == '.') goto L12;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final hq.c E(hq.c cVar, hq.c packageName) {
        Intrinsics.checkNotNullParameter(cVar, "<this>");
        Intrinsics.checkNotNullParameter(packageName, "prefix");
        Intrinsics.checkNotNullParameter(cVar, "<this>");
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        if (!Intrinsics.areEqual(cVar, packageName) && !packageName.a.c()) {
            String str = cVar.a.a;
            String str2 = packageName.a.a;
            if (x.o(str, str2, false)) {
            }
            return cVar;
        }
        if (!packageName.a.c()) {
            if (Intrinsics.areEqual(cVar, packageName)) {
                return hq.c.f10203c;
            }
            String substring = cVar.a.a.substring(packageName.a.a.length() + 1);
            Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
            return new hq.c(substring);
        }
        return cVar;
    }

    public static void F(int i5, int i6) {
        String h0;
        if (i5 < 0 || i5 >= i6) {
            if (i5 < 0) {
                h0 = ys.d.h0("%s (%s) must not be negative", "index", Integer.valueOf(i5));
            } else {
                if (i6 < 0) {
                    StringBuilder sb2 = new StringBuilder(String.valueOf(i6).length() + 15);
                    sb2.append("negative size: ");
                    sb2.append(i6);
                    throw new IllegalArgumentException(sb2.toString());
                }
                h0 = ys.d.h0("%s (%s) must be less than size (%s)", "index", Integer.valueOf(i5), Integer.valueOf(i6));
            }
            throw new IndexOutOfBoundsException(h0);
        }
    }

    public static void G(int i5, int i6) {
        if (i5 < 0 || i5 > i6) {
            throw new IndexOutOfBoundsException(I(i5, i6, "index"));
        }
    }

    public static void H(int i5, int i6, int i10) {
        if (i5 < 0 || i6 < i5 || i6 > i10) {
            throw new IndexOutOfBoundsException((i5 < 0 || i5 > i10) ? I(i5, i10, "start index") : (i6 < 0 || i6 > i10) ? I(i6, i10, "end index") : ys.d.h0("end index (%s) must not be less than start index (%s)", Integer.valueOf(i6), Integer.valueOf(i5)));
        }
    }

    public static String I(int i5, int i6, String str) {
        if (i5 < 0) {
            return ys.d.h0("%s (%s) must not be negative", str, Integer.valueOf(i5));
        }
        if (i6 >= 0) {
            return ys.d.h0("%s (%s) must not be greater than size (%s)", str, Integer.valueOf(i5), Integer.valueOf(i6));
        }
        StringBuilder sb2 = new StringBuilder(String.valueOf(i6).length() + 15);
        sb2.append("negative size: ");
        sb2.append(i6);
        throw new IllegalArgumentException(sb2.toString());
    }

    public static long c(int i5, int i6, int i10) {
        long j;
        if ((i10 & 2) != 0) {
            i5 = Integer.MAX_VALUE;
        }
        if ((i10 & 8) != 0) {
            i6 = Integer.MAX_VALUE;
        }
        if (i5 < 0) {
            throw new IllegalArgumentException(("maxWidth(" + i5 + ") must be >= than minWidth(0)").toString());
        }
        if (i6 < 0) {
            throw new IllegalArgumentException(("maxHeight(" + i6 + ") must be >= than minHeight(0)").toString());
        }
        int i11 = i6 == Integer.MAX_VALUE ? 0 : i6;
        int b10 = tn.g.b(i11);
        int i12 = i5 == Integer.MAX_VALUE ? 0 : i5;
        int b11 = tn.g.b(i12);
        if (b10 + b11 > 31) {
            throw new IllegalArgumentException(s4.h.d(i12, "Can't represent a width of ", i11, " and height of ", " in Constraints"));
        }
        if (b11 == 13) {
            j = 3;
        } else if (b11 == 18) {
            j = 1;
        } else if (b11 == 15) {
            j = 2;
        } else {
            if (b11 != 16) {
                throw new IllegalStateException("Should only have the provided constants.");
            }
            j = 0;
        }
        int i13 = i5 == Integer.MAX_VALUE ? 0 : i5 + 1;
        int i14 = i6 == Integer.MAX_VALUE ? 0 : i6 + 1;
        int i15 = m0.a.f14309b[(int) j];
        return (i14 << (i15 + 31)) | j | (0 << 2) | (i13 << 33) | (0 << i15);
    }

    public static void d(int i5, int i6) {
        String c6;
        if (i5 < 0 || i5 >= i6) {
            if (i5 < 0) {
                c6 = ys.d.c("%s (%s) must not be negative", "index", Integer.valueOf(i5));
            } else {
                if (i6 < 0) {
                    throw new IllegalArgumentException(k0.d.i(i6, "negative size: "));
                }
                c6 = ys.d.c("%s (%s) must be less than size (%s)", "index", Integer.valueOf(i5), Integer.valueOf(i6));
            }
            throw new IndexOutOfBoundsException(c6);
        }
    }

    public static void e(int i5, int i6, int i10) {
        if (i5 < 0 || i6 < i5 || i6 > i10) {
            throw new IndexOutOfBoundsException((i5 < 0 || i5 > i10) ? h(i5, i10, "start index") : (i6 < 0 || i6 > i10) ? h(i6, i10, "end index") : ys.d.c("end index (%s) must not be less than start index (%s)", Integer.valueOf(i6), Integer.valueOf(i5)));
        }
    }

    public static void f(String str, boolean z5) {
        if (!z5) {
            throw g1.a(str, null);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:150:0x0541  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x01e7  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x02ee A[LOOP:1: B:50:0x02b4->B:61:0x02ee, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:62:0x02f7 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final o g(Context context, v3.b configuration) {
        a3.l lVar;
        a3.m mVar;
        Executor executor;
        Iterator it;
        boolean z5;
        int i5;
        int i6;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        h4.b workTaskExecutor = new h4.b(configuration.f19183b);
        Context context2 = context.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(context2, "context.applicationContext");
        f4.l executor2 = workTaskExecutor.a;
        Intrinsics.checkNotNullExpressionValue(executor2, "workTaskExecutor.serialTaskExecutor");
        v3.r clock = configuration.f19184c;
        boolean z6 = context.getResources().getBoolean(R.bool.workmanager_test_configuration);
        Intrinsics.checkNotNullParameter(context2, "context");
        Intrinsics.checkNotNullParameter(executor2, "queryExecutor");
        Intrinsics.checkNotNullParameter(clock, "clock");
        if (z6) {
            Intrinsics.checkNotNullParameter(context2, "context");
            Intrinsics.checkNotNullParameter(WorkDatabase.class, "klass");
            lVar = new a3.l(context2, null);
            lVar.f80i = true;
        } else {
            Intrinsics.checkNotNullParameter(context2, "context");
            Intrinsics.checkNotNullParameter(WorkDatabase.class, "klass");
            if (StringsKt.K("androidx.work.workdb")) {
                throw new IllegalArgumentException("Cannot build a database with null or empty name. If you are trying to create an in memory database, use Room.inMemoryDatabaseBuilder");
            }
            a3.l lVar2 = new a3.l(context2, "androidx.work.workdb");
            lVar2.f79h = new com.discord.chat.input.views.d(context2, 9);
            lVar = lVar2;
        }
        Intrinsics.checkNotNullParameter(executor2, "executor");
        lVar.f77f = executor2;
        b callback = new b(clock);
        Intrinsics.checkNotNullParameter(callback, "callback");
        ArrayList arrayList = lVar.f74c;
        arrayList.add(callback);
        lVar.a(d.f19630h);
        lVar.a(new f(context2, 2, 3));
        lVar.a(d.f19631i);
        lVar.a(d.j);
        lVar.a(new f(context2, 5, 6));
        lVar.a(d.k);
        lVar.a(d.f19632l);
        lVar.a(d.f19633m);
        lVar.a(new f(context2));
        lVar.a(new f(context2, 10, 11));
        lVar.a(d.f19626d);
        lVar.a(d.f19627e);
        lVar.a(d.f19628f);
        lVar.a(d.f19629g);
        lVar.k = false;
        lVar.f81l = true;
        Executor executor3 = lVar.f77f;
        if (executor3 == null && lVar.f78g == null) {
            com.discord.misc.utilities.threading.a aVar = o.a.f15702v;
            lVar.f78g = aVar;
            lVar.f77f = aVar;
        } else if (executor3 != null && lVar.f78g == null) {
            lVar.f78g = executor3;
        } else if (executor3 == null) {
            lVar.f77f = lVar.f78g;
        }
        HashSet hashSet = lVar.f85p;
        LinkedHashSet linkedHashSet = lVar.f84o;
        if (hashSet != null) {
            Intrinsics.checkNotNull(hashSet);
            Iterator it2 = hashSet.iterator();
            while (it2.hasNext()) {
                int intValue = ((Number) it2.next()).intValue();
                if (linkedHashSet.contains(Integer.valueOf(intValue))) {
                    throw new IllegalArgumentException(k0.d.i(intValue, "Inconsistency detected. A Migration was supplied to addMigration(Migration... migrations) that has a start or end version equal to a start version supplied to fallbackToDestructiveMigrationFrom(int... startVersions). Start version: ").toString());
                }
            }
        }
        g3.b bVar = lVar.f79h;
        if (bVar == null) {
            bVar = new ha.k(8);
        }
        g3.b bVar2 = bVar;
        if (lVar.f82m > 0) {
            if (lVar.f73b != null) {
                throw new IllegalArgumentException("Required value was null.");
            }
            throw new IllegalArgumentException("Cannot create auto-closing database for an in-memory database.");
        }
        boolean z7 = lVar.f80i;
        a3.m mVar2 = lVar.j;
        mVar2.getClass();
        Context context3 = lVar.a;
        Intrinsics.checkNotNullParameter(context3, "context");
        a3.m mVar3 = a3.m.f86d;
        a3.m mVar4 = a3.m.f88i;
        if (mVar2 == mVar3) {
            Object systemService = context3.getSystemService("activity");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.ActivityManager");
            ActivityManager activityManager = (ActivityManager) systemService;
            Intrinsics.checkNotNullParameter(activityManager, "activityManager");
            if (activityManager.isLowRamDevice()) {
                mVar2 = a3.m.f87e;
            } else {
                mVar = mVar4;
                executor = lVar.f77f;
                if (executor != null) {
                    throw new IllegalArgumentException("Required value was null.");
                }
                Executor executor4 = lVar.f78g;
                if (executor4 == null) {
                    throw new IllegalArgumentException("Required value was null.");
                }
                boolean z8 = lVar.k;
                boolean z10 = lVar.f81l;
                String str = lVar.f73b;
                gj.c cVar = lVar.f83n;
                ArrayList arrayList2 = lVar.f75d;
                ArrayList arrayList3 = lVar.f76e;
                a3.b configuration2 = new a3.b(context3, str, bVar2, cVar, arrayList, z7, mVar, executor, executor4, z8, z10, linkedHashSet, arrayList2, arrayList3);
                Intrinsics.checkNotNullParameter(WorkDatabase.class, "klass");
                Intrinsics.checkNotNullParameter("_Impl", "suffix");
                Package r11 = WorkDatabase.class.getPackage();
                Intrinsics.checkNotNull(r11);
                String fullPackage = r11.getName();
                String canonicalName = WorkDatabase.class.getCanonicalName();
                Intrinsics.checkNotNull(canonicalName);
                Intrinsics.checkNotNullExpressionValue(fullPackage, "fullPackage");
                if (fullPackage.length() != 0) {
                    canonicalName = canonicalName.substring(fullPackage.length() + 1);
                    Intrinsics.checkNotNullExpressionValue(canonicalName, "this as java.lang.String).substring(startIndex)");
                }
                String str2 = x.m(canonicalName, '.', '_') + "_Impl";
                try {
                    Class<?> cls = Class.forName(fullPackage.length() == 0 ? str2 : fullPackage + '.' + str2, true, WorkDatabase.class.getClassLoader());
                    Intrinsics.checkNotNull(cls, "null cannot be cast to non-null type java.lang.Class<T of androidx.room.Room.getGeneratedImplementation>");
                    WorkDatabase workDatabase = (WorkDatabase) cls.newInstance();
                    a3.i iVar = workDatabase.f2571d;
                    LinkedHashMap linkedHashMap = workDatabase.f2574g;
                    Intrinsics.checkNotNullParameter(configuration2, "configuration");
                    workDatabase.f2570c = workDatabase.e(configuration2);
                    Set i10 = workDatabase.i();
                    BitSet bitSet = new BitSet();
                    Iterator it3 = i10.iterator();
                    while (true) {
                        int i11 = -1;
                        if (it3.hasNext()) {
                            Class cls2 = (Class) it3.next();
                            int size = arrayList3.size() - 1;
                            if (size >= 0) {
                                while (true) {
                                    int i12 = size;
                                    size = i12 - 1;
                                    i5 = i11;
                                    if (cls2.isAssignableFrom(arrayList3.get(i12).getClass())) {
                                        bitSet.set(i12);
                                        i6 = i12;
                                        break;
                                    }
                                    if (size < 0) {
                                        break;
                                    }
                                    i11 = i5;
                                }
                                if (i6 >= 0) {
                                    throw new IllegalArgumentException(("A required auto migration spec (" + cls2.getCanonicalName() + ") is missing in the database configuration.").toString());
                                }
                                linkedHashMap.put(cls2, arrayList3.get(i6));
                            } else {
                                i5 = -1;
                            }
                            i6 = i5;
                            if (i6 >= 0) {
                            }
                        } else {
                            int size2 = arrayList3.size() - 1;
                            if (size2 >= 0) {
                                while (true) {
                                    int i13 = size2 - 1;
                                    if (!bitSet.get(size2)) {
                                        throw new IllegalArgumentException("Unexpected auto migration specs found. Annotate AutoMigrationSpec implementation with @ProvidedAutoMigrationSpec annotation or remove this spec from the builder.");
                                    }
                                    if (i13 < 0) {
                                        break;
                                    }
                                    size2 = i13;
                                }
                            }
                            for (b3.a aVar2 : workDatabase.g(linkedHashMap)) {
                                int i14 = aVar2.a;
                                int i15 = aVar2.f2732b;
                                gj.c cVar2 = configuration2.f46d;
                                LinkedHashMap linkedHashMap2 = (LinkedHashMap) cVar2.f9329e;
                                if (linkedHashMap2.containsKey(Integer.valueOf(i14))) {
                                    Map map = (Map) linkedHashMap2.get(Integer.valueOf(i14));
                                    if (map == null) {
                                        map = v0.d();
                                    }
                                    z5 = map.containsKey(Integer.valueOf(i15));
                                } else {
                                    z5 = false;
                                }
                                if (!z5) {
                                    cVar2.s(aVar2);
                                }
                            }
                            workDatabase.h().setWriteAheadLoggingEnabled(configuration2.f49g == mVar4);
                            workDatabase.f2573f = configuration2.f47e;
                            workDatabase.f2569b = configuration2.f50h;
                            Intrinsics.checkNotNullParameter(configuration2.f51i, "executor");
                            new ArrayDeque();
                            workDatabase.f2572e = configuration2.f48f;
                            Map j = workDatabase.j();
                            BitSet bitSet2 = new BitSet();
                            Iterator it4 = j.entrySet().iterator();
                            while (true) {
                                boolean hasNext = it4.hasNext();
                                List list = configuration2.f53m;
                                if (!hasNext) {
                                    int size3 = list.size() - 1;
                                    if (size3 >= 0) {
                                        while (true) {
                                            int i16 = size3 - 1;
                                            if (!bitSet2.get(size3)) {
                                                throw new IllegalArgumentException("Unexpected type converter " + list.get(size3) + ". Annotate TypeConverter class with @ProvidedTypeConverter annotation or remove this converter from the builder.");
                                            }
                                            if (i16 < 0) {
                                                break;
                                            }
                                            size3 = i16;
                                        }
                                    }
                                    Context applicationContext = context.getApplicationContext();
                                    Intrinsics.checkNotNullExpressionValue(applicationContext, "context.applicationContext");
                                    c4.l trackers = new c4.l(applicationContext, workTaskExecutor);
                                    e processor = new e(context.getApplicationContext(), configuration, workTaskExecutor, workDatabase);
                                    p schedulersCreator = p.f19669d;
                                    Intrinsics.checkNotNullParameter(context, "context");
                                    Intrinsics.checkNotNullParameter(configuration, "configuration");
                                    Intrinsics.checkNotNullParameter(workTaskExecutor, "workTaskExecutor");
                                    Intrinsics.checkNotNullParameter(workDatabase, "workDatabase");
                                    Intrinsics.checkNotNullParameter(trackers, "trackers");
                                    Intrinsics.checkNotNullParameter(processor, "processor");
                                    Intrinsics.checkNotNullParameter(schedulersCreator, "schedulersCreator");
                                    return new o(context.getApplicationContext(), configuration, workTaskExecutor, workDatabase, (List) schedulersCreator.invoke(context, configuration, workTaskExecutor, workDatabase, trackers, processor), processor, trackers);
                                }
                                Map.Entry entry = (Map.Entry) it4.next();
                                Class cls3 = (Class) entry.getKey();
                                for (Class cls4 : (List) entry.getValue()) {
                                    int size4 = list.size() - 1;
                                    if (size4 >= 0) {
                                        while (true) {
                                            int i17 = size4 - 1;
                                            it = it4;
                                            if (cls4.isAssignableFrom(list.get(size4).getClass())) {
                                                bitSet2.set(size4);
                                                break;
                                            }
                                            if (i17 < 0) {
                                                break;
                                            }
                                            size4 = i17;
                                            it4 = it;
                                        }
                                    } else {
                                        it = it4;
                                    }
                                    size4 = -1;
                                    if (!(size4 >= 0)) {
                                        throw new IllegalArgumentException(("A required type converter (" + cls4 + ") for " + cls3.getCanonicalName() + " is missing in the database configuration.").toString());
                                    }
                                    workDatabase.j.put(cls4, list.get(size4));
                                    it4 = it;
                                }
                            }
                        }
                    }
                } catch (ClassNotFoundException unused) {
                    throw new RuntimeException("Cannot find implementation for " + WorkDatabase.class.getCanonicalName() + ". " + str2 + " does not exist");
                } catch (IllegalAccessException unused2) {
                    throw new RuntimeException("Cannot access the constructor " + WorkDatabase.class + ".canonicalName");
                } catch (InstantiationException unused3) {
                    throw new RuntimeException("Failed to create an instance of " + WorkDatabase.class + ".canonicalName");
                }
            }
        }
        mVar = mVar2;
        executor = lVar.f77f;
        if (executor != null) {
        }
    }

    public static String h(int i5, int i6, String str) {
        if (i5 < 0) {
            return ys.d.c("%s (%s) must not be negative", str, Integer.valueOf(i5));
        }
        if (i6 >= 0) {
            return ys.d.c("%s (%s) must not be greater than size (%s)", str, Integer.valueOf(i5), Integer.valueOf(i6));
        }
        throw new IllegalArgumentException(k0.d.i(i6, "negative size: "));
    }

    public static final void i(View view) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        ViewParent parent = view.getParent();
        ViewGroup viewGroup = parent instanceof ViewGroup ? (ViewGroup) parent : null;
        if (viewGroup != null) {
            viewGroup.removeView(view);
        }
    }

    public static boolean j(Object obj, Object obj2) {
        if (obj != obj2) {
            return obj != null && obj.equals(obj2);
        }
        return true;
    }

    public static final int k(int i5, Object obj) {
        return (i5 * 31) + (obj != null ? obj.hashCode() : 0);
    }

    public static int l(int i5, int i6) {
        return i5 >= 0 ? i5 / i6 : ((i5 + 1) / i6) - 1;
    }

    public static long m(int i5, long j) {
        return j >= 0 ? j / i5 : ((j + 1) / i5) - 1;
    }

    public static int n(int i5, int i6) {
        return i5 - (l(i5, i6) * i6);
    }

    public static int o(int i5, long j) {
        return (int) (j - (m(i5, j) * i5));
    }

    public static void r(File file) {
        if (file.exists()) {
            if (file.isDirectory()) {
                return;
            }
            if (!file.delete()) {
                String absolutePath = file.getAbsolutePath();
                y0 y0Var = new y0(file.getAbsolutePath());
                n8.b bVar = new n8.b(absolutePath);
                bVar.initCause(y0Var);
                throw bVar;
            }
        }
        if (!file.mkdirs() && !file.isDirectory()) {
            throw new n8.b(file.getAbsolutePath());
        }
    }

    public static a1.d u(String statusLine) {
        int i5;
        String str;
        Intrinsics.checkNotNullParameter(statusLine, "statusLine");
        boolean o6 = x.o(statusLine, "HTTP/1.", false);
        s sVar = s.HTTP_1_0;
        if (o6) {
            i5 = 9;
            if (statusLine.length() < 9 || statusLine.charAt(8) != ' ') {
                throw new ProtocolException(Intrinsics.stringPlus("Unexpected status line: ", statusLine));
            }
            int charAt = statusLine.charAt(7) - '0';
            if (charAt != 0) {
                if (charAt != 1) {
                    throw new ProtocolException(Intrinsics.stringPlus("Unexpected status line: ", statusLine));
                }
                sVar = s.HTTP_1_1;
            }
        } else {
            if (!x.o(statusLine, "ICY ", false)) {
                throw new ProtocolException(Intrinsics.stringPlus("Unexpected status line: ", statusLine));
            }
            i5 = 4;
        }
        int i6 = i5 + 3;
        if (statusLine.length() < i6) {
            throw new ProtocolException(Intrinsics.stringPlus("Unexpected status line: ", statusLine));
        }
        try {
            String substring = statusLine.substring(i5, i6);
            Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
            int parseInt = Integer.parseInt(substring);
            if (statusLine.length() <= i6) {
                str = "";
            } else {
                if (statusLine.charAt(i6) != ' ') {
                    throw new ProtocolException(Intrinsics.stringPlus("Unexpected status line: ", statusLine));
                }
                str = statusLine.substring(i5 + 4);
                Intrinsics.checkNotNullExpressionValue(str, "this as java.lang.String).substring(startIndex)");
            }
            return new a1.d(sVar, parseInt, str);
        } catch (NumberFormatException unused) {
            throw new ProtocolException(Intrinsics.stringPlus("Unexpected status line: ", statusLine));
        }
    }

    public static hq.e v(hq.e eVar, String str, String str2, int i5) {
        char charAt;
        char charAt2;
        Object obj;
        boolean z5 = (i5 & 4) != 0;
        if ((i5 & 8) != 0) {
            str2 = null;
        }
        if (!eVar.f10210e) {
            String c6 = eVar.c();
            Intrinsics.checkNotNullExpressionValue(c6, "getIdentifier(...)");
            if (x.o(c6, str, false) && c6.length() != str.length() && ('a' > (charAt = c6.charAt(str.length())) || charAt >= '{')) {
                if (str2 != null) {
                    StringBuilder o6 = k0.d.o(str2);
                    o6.append(StringsKt.N(c6, str));
                    return hq.e.e(o6.toString());
                }
                if (!z5) {
                    return eVar;
                }
                String N = StringsKt.N(c6, str);
                Intrinsics.checkNotNullParameter(N, "<this>");
                if (N.length() != 0 && com.facebook.imagepipeline.nativecode.c.P(0, N)) {
                    if (N.length() == 1 || !com.facebook.imagepipeline.nativecode.c.P(1, N)) {
                        Intrinsics.checkNotNullParameter(N, "<this>");
                        if (N.length() != 0 && 'A' <= (charAt2 = N.charAt(0)) && charAt2 < '[') {
                            char lowerCase = Character.toLowerCase(charAt2);
                            String substring = N.substring(1);
                            Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
                            N = lowerCase + substring;
                        }
                    } else {
                        Intrinsics.checkNotNullParameter(N, "<this>");
                        Iterator it = new IntRange(0, N.length() - 1, 1).iterator();
                        while (true) {
                            if (!((yo.b) it).f20994i) {
                                obj = null;
                                break;
                            }
                            obj = it.next();
                            if (!com.facebook.imagepipeline.nativecode.c.P(((Number) obj).intValue(), N)) {
                                break;
                            }
                        }
                        Integer num = (Integer) obj;
                        if (num != null) {
                            int intValue = num.intValue() - 1;
                            StringBuilder sb2 = new StringBuilder();
                            String substring2 = N.substring(0, intValue);
                            Intrinsics.checkNotNullExpressionValue(substring2, "substring(...)");
                            sb2.append(com.facebook.imagepipeline.nativecode.c.X(substring2));
                            String substring3 = N.substring(intValue);
                            Intrinsics.checkNotNullExpressionValue(substring3, "substring(...)");
                            sb2.append(substring3);
                            N = sb2.toString();
                        } else {
                            N = com.facebook.imagepipeline.nativecode.c.X(N);
                        }
                    }
                }
                if (hq.e.f(N)) {
                    return hq.e.e(N);
                }
            }
        }
        return null;
    }

    public static final void w(View view) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        Intrinsics.checkNotNullParameter(view, "<this>");
        ViewParent parent = view.getParent();
        ViewGroup viewGroup = parent instanceof ViewGroup ? (ViewGroup) parent : null;
        if (viewGroup != null) {
            viewGroup.endViewTransition(view);
            viewGroup.removeView(view);
        }
        view.setVisibility(0);
        view.setTranslationY(0.0f);
    }

    public static void x(File file, File file2) {
        file.getClass();
        file2.delete();
        if (file.renameTo(file2)) {
            return;
        }
        Throwable fileNotFoundException = !file2.exists() ? file.getParentFile().exists() ? !file.exists() ? new FileNotFoundException(file.getAbsolutePath()) : null : new n8.c(file.getAbsolutePath()) : new y0(file2.getAbsolutePath());
        n8.d dVar = new n8.d("Unknown error renaming " + file.getAbsolutePath() + " to " + file2.getAbsolutePath());
        dVar.initCause(fileNotFoundException);
        throw dVar;
    }

    public static int y(int i5, int i6) {
        if (i6 == 0) {
            return i5;
        }
        long j = i5 + i6;
        if (j >= -2147483648L && j <= 2147483647L) {
            return (int) j;
        }
        StringBuilder sb2 = new StringBuilder(32);
        sb2.append("Integer overflow: (");
        sb2.append(i5);
        sb2.append(',');
        sb2.append(i6);
        sb2.append(')');
        throw new ArithmeticException(sb2.toString());
    }

    public static long z(long j, long j5) {
        if (j5 == 0) {
            return j;
        }
        if (j5 <= 0 ? j >= Long.MIN_VALUE - j5 : j <= LongCompanionObject.MAX_VALUE - j5) {
            return j + j5;
        }
        StringBuilder sb2 = new StringBuilder(32);
        sb2.append("Long overflow: (");
        sb2.append(j);
        sb2.append(',');
        sb2.append(j5);
        sb2.append(')');
        throw new ArithmeticException(sb2.toString());
    }

    public abstract int p();

    public abstract boolean q();

    public abstract void s(Throwable th2);

    public abstract void t(e4.i iVar);

    @Override // androidx.core.view.b1
    public void a() {
    }

    @Override // androidx.core.view.b1
    public void b() {
    }
}
