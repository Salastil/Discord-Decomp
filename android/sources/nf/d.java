package nf;

import af.h0;
import android.content.ContentProviderClient;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.ProviderInfo;
import android.database.Cursor;
import android.database.MatrixCursor;
import android.net.Uri;
import android.os.Build;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.os.SystemClock;
import android.util.Log;
import bf.t;
import hc.l;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;

/* loaded from: classes3.dex */
public final class d {

    /* renamed from: b, reason: collision with root package name */
    public static final wi.d f15415b;

    /* renamed from: c, reason: collision with root package name */
    public static Boolean f15416c = null;

    /* renamed from: d, reason: collision with root package name */
    public static String f15417d = null;

    /* renamed from: e, reason: collision with root package name */
    public static boolean f15418e = false;

    /* renamed from: f, reason: collision with root package name */
    public static int f15419f = -1;

    /* renamed from: g, reason: collision with root package name */
    public static Boolean f15420g;

    /* renamed from: h, reason: collision with root package name */
    public static final ThreadLocal f15421h = new ThreadLocal();

    /* renamed from: i, reason: collision with root package name */
    public static final h0 f15422i = new h0(4);
    public static final r8.c j;
    public static h k;

    /* renamed from: l, reason: collision with root package name */
    public static i f15423l;
    public final Context a;

    static {
        int i5 = 14;
        j = new r8.c(i5);
        f15415b = new wi.d(i5);
    }

    public d(Context context) {
        this.a = context;
    }

    public static int a(Context context, String str) {
        try {
            ClassLoader classLoader = context.getApplicationContext().getClassLoader();
            StringBuilder sb2 = new StringBuilder(str.length() + 61);
            sb2.append("com.google.android.gms.dynamite.descriptors.");
            sb2.append(str);
            sb2.append(".ModuleDescriptor");
            Class<?> loadClass = classLoader.loadClass(sb2.toString());
            Field declaredField = loadClass.getDeclaredField("MODULE_ID");
            Field declaredField2 = loadClass.getDeclaredField("MODULE_VERSION");
            if (t.j(declaredField.get(null), str)) {
                return declaredField2.getInt(null);
            }
            String valueOf = String.valueOf(declaredField.get(null));
            StringBuilder sb3 = new StringBuilder(valueOf.length() + 50 + str.length() + 1);
            sb3.append("Module descriptor id '");
            sb3.append(valueOf);
            sb3.append("' didn't match expected id '");
            sb3.append(str);
            sb3.append("'");
            Log.e("DynamiteModule", sb3.toString());
            return 0;
        } catch (ClassNotFoundException unused) {
            StringBuilder sb4 = new StringBuilder(str.length() + 45);
            sb4.append("Local module descriptor class for ");
            sb4.append(str);
            sb4.append(" not found.");
            Log.w("DynamiteModule", sb4.toString());
            return 0;
        } catch (Exception e9) {
            Log.e("DynamiteModule", "Failed to load module descriptor class: ".concat(String.valueOf(e9.getMessage())));
            return 0;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:69:0x02df A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:72:0x02ee A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:75:0x02e5 A[DONT_GENERATE] */
    /* JADX WARN: Type inference failed for: r6v0, types: [java.lang.String] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static d b(Context context, wi.d dVar) {
        Context context2;
        int i5;
        d dVar2;
        int i6;
        mf.a y5;
        i iVar;
        boolean z5;
        mf.a y6;
        ?? r62 = "Considering local module com.google.android.gms.cronet_dynamite:";
        Context applicationContext = context.getApplicationContext();
        if (applicationContext == null) {
            throw new b("null application Context");
        }
        ThreadLocal threadLocal = f15421h;
        g gVar = (g) threadLocal.get();
        g gVar2 = new g();
        threadLocal.set(gVar2);
        h0 h0Var = f15422i;
        Long l6 = (Long) h0Var.get();
        long longValue = l6.longValue();
        try {
            h0Var.set(Long.valueOf(SystemClock.uptimeMillis()));
            l k5 = dVar.k(context, j);
            int i10 = k5.a;
            int i11 = k5.f9773b;
            StringBuilder sb2 = new StringBuilder("com.google.android.gms.cronet_dynamite".length() + 26 + String.valueOf(i10).length() + 19 + "com.google.android.gms.cronet_dynamite".length() + 1 + String.valueOf(i11).length());
            sb2.append("Considering local module com.google.android.gms.cronet_dynamite:");
            sb2.append(i10);
            sb2.append(" and remote module com.google.android.gms.cronet_dynamite:");
            sb2.append(i11);
            Log.i("DynamiteModule", sb2.toString());
            int i12 = k5.f9774c;
            if (i12 != 0) {
                if (i12 == -1) {
                    if (k5.a != 0) {
                        i12 = -1;
                    }
                }
                if (i12 != 1 || k5.f9773b != 0) {
                    if (i12 == -1) {
                        Log.i("DynamiteModule", "Selected local version of ".concat("com.google.android.gms.cronet_dynamite"));
                        d dVar3 = new d(applicationContext);
                        if (longValue == 0) {
                            h0Var.remove();
                        } else {
                            h0Var.set(l6);
                        }
                        Cursor cursor = gVar2.a;
                        if (cursor != null) {
                            cursor.close();
                        }
                        threadLocal.set(gVar);
                        return dVar3;
                    }
                    if (i12 != 1) {
                        StringBuilder sb3 = new StringBuilder(String.valueOf(i12).length() + 36);
                        sb3.append("VersionPolicy returned invalid code:");
                        sb3.append(i12);
                        throw new b(sb3.toString());
                    }
                    try {
                        try {
                            i6 = k5.f9773b;
                        } catch (b e9) {
                            e = e9;
                            context2 = r62;
                            String message = e.getMessage();
                            StringBuilder sb4 = new StringBuilder(String.valueOf(message).length() + 30);
                            sb4.append("Failed to load remote module: ");
                            sb4.append(message);
                            Log.w("DynamiteModule", sb4.toString());
                            i5 = k5.a;
                            if (i5 != 0 || dVar.k(context2, new p9.d(i5, 6)).f9774c != -1) {
                                throw new b("Remote load failed. No local fallback found.", e);
                            }
                            Log.i("DynamiteModule", "Selected local version of ".concat("com.google.android.gms.cronet_dynamite"));
                            dVar2 = new d(applicationContext);
                            return dVar2;
                        }
                    } catch (b e10) {
                        e = e10;
                        context2 = context;
                        String message2 = e.getMessage();
                        StringBuilder sb42 = new StringBuilder(String.valueOf(message2).length() + 30);
                        sb42.append("Failed to load remote module: ");
                        sb42.append(message2);
                        Log.w("DynamiteModule", sb42.toString());
                        i5 = k5.a;
                        if (i5 != 0) {
                        }
                        throw new b("Remote load failed. No local fallback found.", e);
                    }
                    try {
                        try {
                            try {
                                synchronized (d.class) {
                                    try {
                                        if (!c(context)) {
                                            throw new b("Remote loading disabled");
                                        }
                                        Boolean bool = f15416c;
                                        if (bool == null) {
                                            throw new b("Failed to determine which loading route to use.");
                                        }
                                        if (bool.booleanValue()) {
                                            StringBuilder sb5 = new StringBuilder("com.google.android.gms.cronet_dynamite".length() + 40 + String.valueOf(i6).length());
                                            sb5.append("Selected remote version of com.google.android.gms.cronet_dynamite, version >= ");
                                            sb5.append(i6);
                                            Log.i("DynamiteModule", sb5.toString());
                                            synchronized (d.class) {
                                                iVar = f15423l;
                                            }
                                            if (iVar == null) {
                                                throw new b("DynamiteLoaderV2 was not cached.");
                                            }
                                            g gVar3 = (g) threadLocal.get();
                                            if (gVar3 == null || gVar3.a == null) {
                                                throw new b("No result cursor");
                                            }
                                            Context applicationContext2 = context.getApplicationContext();
                                            Cursor cursor2 = gVar3.a;
                                            new mf.b(null);
                                            synchronized (d.class) {
                                                z5 = f15419f >= 2;
                                            }
                                            if (z5) {
                                                Log.v("DynamiteModule", "Dynamite loader version >= 2, using loadModule2NoCrashUtils");
                                                y6 = iVar.z(new mf.b(applicationContext2), i6, new mf.b(cursor2));
                                            } else {
                                                Log.w("DynamiteModule", "Dynamite loader version < 2, falling back to loadModule2");
                                                y6 = iVar.y(new mf.b(applicationContext2), i6, new mf.b(cursor2));
                                            }
                                            Context context3 = (Context) mf.b.A(y6);
                                            if (context3 == null) {
                                                throw new b("Failed to get module context");
                                            }
                                            dVar2 = new d(context3);
                                        } else {
                                            StringBuilder sb6 = new StringBuilder("com.google.android.gms.cronet_dynamite".length() + 40 + String.valueOf(i6).length());
                                            sb6.append("Selected remote version of com.google.android.gms.cronet_dynamite, version >= ");
                                            sb6.append(i6);
                                            Log.i("DynamiteModule", sb6.toString());
                                            h f2 = f(context);
                                            if (f2 == null) {
                                                throw new b("Failed to create IDynamiteLoader.");
                                            }
                                            Parcel t5 = f2.t(6, f2.u());
                                            int readInt = t5.readInt();
                                            t5.recycle();
                                            if (readInt >= 3) {
                                                g gVar4 = (g) threadLocal.get();
                                                if (gVar4 == null) {
                                                    throw new b("No cached result cursor holder");
                                                }
                                                y5 = f2.B(new mf.b(context), i6, new mf.b(gVar4.a));
                                            } else if (readInt == 2) {
                                                Log.w("DynamiteModule", "IDynamite loader version = 2");
                                                y5 = f2.z(new mf.b(context), i6);
                                            } else {
                                                Log.w("DynamiteModule", "Dynamite loader version < 2, falling back to createModuleContext");
                                                y5 = f2.y(new mf.b(context), i6);
                                            }
                                            Object A = mf.b.A(y5);
                                            if (A == null) {
                                                throw new b("Failed to load remote module.");
                                            }
                                            dVar2 = new d((Context) A);
                                        }
                                        return dVar2;
                                    } catch (Throwable th2) {
                                        th = th2;
                                        throw th;
                                    }
                                }
                            } catch (Throwable th3) {
                                th = th3;
                            }
                        } catch (RemoteException e11) {
                            e = e11;
                            throw new b("Failed to load remote module.", e);
                        } catch (b e12) {
                            throw e12;
                        } catch (Throwable th4) {
                            th = th4;
                            throw new b("Failed to load remote module.", th);
                        }
                    } catch (RemoteException e13) {
                        e = e13;
                        throw new b("Failed to load remote module.", e);
                    } catch (b e14) {
                        throw e14;
                    } catch (Throwable th5) {
                        th = th5;
                        throw new b("Failed to load remote module.", th);
                    }
                }
            }
            int i13 = k5.a;
            int i14 = k5.f9773b;
            StringBuilder sb7 = new StringBuilder("com.google.android.gms.cronet_dynamite".length() + 46 + String.valueOf(i13).length() + 23 + String.valueOf(i14).length() + 1);
            sb7.append("No acceptable module com.google.android.gms.cronet_dynamite found. Local version is ");
            sb7.append(i13);
            sb7.append(" and remote version is ");
            sb7.append(i14);
            sb7.append(".");
            throw new b(sb7.toString());
        } finally {
            if (longValue == 0) {
                f15422i.remove();
            } else {
                f15422i.set(l6);
            }
            Cursor cursor3 = gVar2.a;
            if (cursor3 != null) {
                cursor3.close();
            }
            f15421h.set(gVar);
        }
    }

    public static boolean c(Context context) {
        ApplicationInfo applicationInfo;
        Boolean bool = Boolean.TRUE;
        if (bool.equals(null) || bool.equals(f15420g)) {
            return true;
        }
        boolean z5 = false;
        if (f15420g == null) {
            ProviderInfo resolveContentProvider = context.getPackageManager().resolveContentProvider("com.google.android.gms.chimera", Build.VERSION.SDK_INT >= 29 ? 268435456 : 0);
            if (ye.f.f20919b.b(context, 10000000) == 0 && resolveContentProvider != null && "com.google.android.gms".equals(resolveContentProvider.packageName)) {
                z5 = true;
            }
            f15420g = Boolean.valueOf(z5);
            if (z5 && (applicationInfo = resolveContentProvider.applicationInfo) != null && (applicationInfo.flags & 129) == 0) {
                Log.i("DynamiteModule", "Non-system-image GmsCore APK, forcing V1");
                f15418e = true;
            }
        }
        if (!z5) {
            Log.e("DynamiteModule", "Invalid GmsCore APK, remote loading disabled.");
        }
        return z5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:38:0x0137, code lost:
    
        if (r7 != false) goto L92;
     */
    /* JADX WARN: Finally extract failed */
    /* JADX WARN: Removed duplicated region for block: B:14:0x00e7 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int d(Context context, boolean z5, boolean z6) {
        Exception exc;
        Throwable th2;
        Cursor query;
        MatrixCursor matrixCursor;
        boolean z7;
        MatrixCursor matrixCursor2 = null;
        try {
            try {
                boolean z8 = true;
                Uri build = new Uri.Builder().scheme("content").authority("com.google.android.gms.chimera").path(true != z5 ? "api" : "api_force_staging").appendPath("com.google.android.gms.cronet_dynamite").appendQueryParameter("requestStartUptime", String.valueOf(((Long) f15422i.get()).longValue())).build();
                ContentProviderClient acquireUnstableContentProviderClient = context.getContentResolver().acquireUnstableContentProviderClient(build);
                boolean z10 = false;
                if (acquireUnstableContentProviderClient != null) {
                    try {
                        query = acquireUnstableContentProviderClient.query(build, null, null, null, null);
                    } catch (RemoteException unused) {
                    } catch (Throwable th3) {
                        acquireUnstableContentProviderClient.release();
                        throw th3;
                    }
                    if (query != null) {
                        try {
                            int count = query.getCount();
                            int columnCount = query.getColumnCount();
                            matrixCursor = new MatrixCursor(query.getColumnNames(), count);
                            for (int i5 = 0; i5 < count; i5++) {
                                if (!query.moveToPosition(i5)) {
                                    throw new RemoteException("Cursor read incomplete (ContentProvider dead?)");
                                }
                                Object[] objArr = new Object[columnCount];
                                for (int i6 = 0; i6 < columnCount; i6++) {
                                    int type = query.getType(i6);
                                    if (type == 0) {
                                        objArr[i6] = null;
                                    } else if (type == 1) {
                                        objArr[i6] = Long.valueOf(query.getLong(i6));
                                    } else if (type == 2) {
                                        objArr[i6] = Double.valueOf(query.getDouble(i6));
                                    } else if (type == 3) {
                                        objArr[i6] = query.getString(i6);
                                    } else {
                                        if (type != 4) {
                                            throw new RemoteException("Unknown column type");
                                        }
                                        objArr[i6] = query.getBlob(i6);
                                    }
                                }
                                matrixCursor.addRow(objArr);
                            }
                            query.close();
                            acquireUnstableContentProviderClient.release();
                            if (matrixCursor != null) {
                                try {
                                    if (matrixCursor.moveToFirst()) {
                                        int i10 = matrixCursor.getInt(0);
                                        if (i10 > 0) {
                                            synchronized (d.class) {
                                                try {
                                                    f15417d = matrixCursor.getString(2);
                                                    int columnIndex = matrixCursor.getColumnIndex("loaderVersion");
                                                    if (columnIndex >= 0) {
                                                        f15419f = matrixCursor.getInt(columnIndex);
                                                    }
                                                    int columnIndex2 = matrixCursor.getColumnIndex("disableStandaloneDynamiteLoader2");
                                                    if (columnIndex2 >= 0) {
                                                        z7 = matrixCursor.getInt(columnIndex2) != 0;
                                                        f15418e = z7;
                                                    } else {
                                                        z7 = false;
                                                    }
                                                } finally {
                                                }
                                            }
                                            g gVar = (g) f15421h.get();
                                            if (gVar == null || gVar.a != null) {
                                                z8 = false;
                                            } else {
                                                gVar.a = matrixCursor;
                                            }
                                            z10 = z7;
                                        }
                                        matrixCursor2 = matrixCursor;
                                        if (z6 && z10) {
                                            throw new b("forcing fallback to container DynamiteLoader impl");
                                        }
                                        if (matrixCursor2 != null) {
                                            matrixCursor2.close();
                                        }
                                        return i10;
                                    }
                                } catch (Exception e9) {
                                    exc = e9;
                                    if (exc instanceof b) {
                                        throw exc;
                                    }
                                    String message = exc.getMessage();
                                    StringBuilder sb2 = new StringBuilder(String.valueOf(message).length() + 25);
                                    sb2.append("V2 version check failed: ");
                                    sb2.append(message);
                                    throw new b(sb2.toString(), exc);
                                } catch (Throwable th4) {
                                    th2 = th4;
                                    matrixCursor2 = matrixCursor;
                                    if (matrixCursor2 == null) {
                                        throw th2;
                                    }
                                    matrixCursor2.close();
                                    throw th2;
                                }
                            }
                            Log.w("DynamiteModule", "Failed to retrieve remote module version.");
                            throw new b("Failed to connect to dynamite module ContentResolver.");
                        } catch (Throwable th5) {
                            try {
                                query.close();
                                throw th5;
                            } catch (Throwable th6) {
                                th5.addSuppressed(th6);
                                throw th5;
                            }
                        }
                    }
                    acquireUnstableContentProviderClient.release();
                }
                matrixCursor = null;
                if (matrixCursor != null) {
                }
                Log.w("DynamiteModule", "Failed to retrieve remote module version.");
                throw new b("Failed to connect to dynamite module ContentResolver.");
            } catch (Throwable th7) {
                th2 = th7;
            }
        } catch (Exception e10) {
            exc = e10;
        }
    }

    public static void e(ClassLoader classLoader) {
        try {
            i iVar = null;
            IBinder iBinder = (IBinder) classLoader.loadClass("com.google.android.gms.dynamiteloader.DynamiteLoaderV2").getConstructor(null).newInstance(null);
            if (iBinder != null) {
                IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.dynamite.IDynamiteLoaderV2");
                iVar = queryLocalInterface instanceof i ? (i) queryLocalInterface : new i(iBinder, "com.google.android.gms.dynamite.IDynamiteLoaderV2", 5);
            }
            f15423l = iVar;
        } catch (ClassNotFoundException | IllegalAccessException | InstantiationException | NoSuchMethodException | InvocationTargetException e9) {
            throw new b("Failed to instantiate dynamite loader", e9);
        }
    }

    public static h f(Context context) {
        h hVar;
        synchronized (d.class) {
            h hVar2 = k;
            if (hVar2 != null) {
                return hVar2;
            }
            try {
                IBinder iBinder = (IBinder) context.createPackageContext("com.google.android.gms", 3).getClassLoader().loadClass("com.google.android.gms.chimera.container.DynamiteLoaderImpl").newInstance();
                if (iBinder == null) {
                    hVar = null;
                } else {
                    IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.dynamite.IDynamiteLoader");
                    hVar = queryLocalInterface instanceof h ? (h) queryLocalInterface : new h(iBinder, "com.google.android.gms.dynamite.IDynamiteLoader", 5);
                }
                if (hVar != null) {
                    k = hVar;
                    return hVar;
                }
            } catch (Exception e9) {
                String message = e9.getMessage();
                StringBuilder sb2 = new StringBuilder(String.valueOf(message).length() + 45);
                sb2.append("Failed to load IDynamiteLoader from GmsCore: ");
                sb2.append(message);
                Log.e("DynamiteModule", sb2.toString());
            }
            return null;
        }
    }
}
