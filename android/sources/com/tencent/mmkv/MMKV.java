package com.tencent.mmkv;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;
import dalvik.annotation.optimization.FastNative;
import java.util.Arrays;
import java.util.EnumMap;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import sn.a;
import sn.b;

/* loaded from: classes3.dex */
public class MMKV implements SharedPreferences, SharedPreferences.Editor {
    public static final EnumMap a;

    /* renamed from: b, reason: collision with root package name */
    public static final EnumMap f6816b;

    /* renamed from: c, reason: collision with root package name */
    public static final a[] f6817c;

    /* renamed from: d, reason: collision with root package name */
    public static final HashSet f6818d;

    /* renamed from: e, reason: collision with root package name */
    public static String f6819e;

    /* renamed from: f, reason: collision with root package name */
    public static boolean f6820f;
    private final long nativeHandle;

    static {
        EnumMap enumMap = new EnumMap(b.class);
        a = enumMap;
        enumMap.put((EnumMap) b.f18070d, (b) 0);
        enumMap.put((EnumMap) b.f18071e, (b) 1);
        EnumMap enumMap2 = new EnumMap(a.class);
        f6816b = enumMap2;
        a aVar = a.f18064d;
        enumMap2.put((EnumMap) aVar, (a) 0);
        a aVar2 = a.f18065e;
        enumMap2.put((EnumMap) aVar2, (a) 1);
        a aVar3 = a.f18066i;
        enumMap2.put((EnumMap) aVar3, (a) 2);
        a aVar4 = a.f18067v;
        enumMap2.put((EnumMap) aVar4, (a) 3);
        a aVar5 = a.f18068w;
        enumMap2.put((EnumMap) aVar5, (a) 4);
        f6817c = new a[]{aVar, aVar2, aVar3, aVar4, aVar5};
        f6818d = new HashSet();
        f6819e = null;
        f6820f = true;
        new HashMap();
    }

    public MMKV(long j) {
        this.nativeHandle = j;
    }

    private native long actualSize(long j);

    private native String[] allKeys(long j, boolean z5);

    public static MMKV b() {
        if (f6819e == null) {
            throw new IllegalStateException("You should Call MMKV.initialize() first.");
        }
        long defaultMMKV = getDefaultMMKV(1, null);
        if (defaultMMKV == 0) {
            throw new RuntimeException("Fail to create an MMKV instance [DefaultMMKV] in JNI");
        }
        if (!f6820f) {
            return new MMKV(defaultMMKV);
        }
        HashSet hashSet = f6818d;
        synchronized (hashSet) {
            try {
                if (!hashSet.contains(Long.valueOf(defaultMMKV))) {
                    if (!checkProcessMode(defaultMMKV)) {
                        throw new IllegalArgumentException("Opening a multi-process MMKV instance [DefaultMMKV] with SINGLE_PROCESS_MODE!");
                    }
                    hashSet.add(Long.valueOf(defaultMMKV));
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return new MMKV(defaultMMKV);
    }

    public static native long backupAllToDirectory(String str);

    public static native boolean backupOneToDirectory(String str, String str2, String str3);

    private static native boolean checkProcessMode(long j);

    private native boolean containsKey(long j, String str);

    private native long count(long j, boolean z5);

    private static native long createNB(int i5);

    public static void d(Context context) {
        String str = context.getFilesDir().getAbsolutePath() + "/mmkv";
        if ((context.getApplicationInfo().flags & 2) == 0) {
            synchronized (f6818d) {
                f6820f = false;
            }
            Log.i("MMKV", "Disable checkProcessMode()");
        } else {
            synchronized (f6818d) {
                f6820f = true;
            }
            Log.i("MMKV", "Enable checkProcessMode()");
        }
        String absolutePath = context.getCacheDir().getAbsolutePath();
        System.loadLibrary("mmkv");
        jniInitialize(str, absolutePath, 1, false);
        f6819e = str;
    }

    private native boolean decodeBool(long j, String str, boolean z5);

    private native byte[] decodeBytes(long j, String str);

    private native double decodeDouble(long j, String str, double d6);

    private native float decodeFloat(long j, String str, float f2);

    private native int decodeInt(long j, String str, int i5);

    private native long decodeLong(long j, String str, long j5);

    private native String decodeString(long j, String str, String str2);

    private native String[] decodeStringSet(long j, String str);

    private static native void destroyNB(long j, int i5);

    private native boolean encodeBool(long j, String str, boolean z5);

    private native boolean encodeBool_2(long j, String str, boolean z5, int i5);

    private native boolean encodeBytes(long j, String str, byte[] bArr);

    private native boolean encodeBytes_2(long j, String str, byte[] bArr, int i5);

    private native boolean encodeDouble(long j, String str, double d6);

    private native boolean encodeDouble_2(long j, String str, double d6, int i5);

    private native boolean encodeFloat(long j, String str, float f2);

    private native boolean encodeFloat_2(long j, String str, float f2, int i5);

    private native boolean encodeInt(long j, String str, int i5);

    private native boolean encodeInt_2(long j, String str, int i5, int i6);

    private native boolean encodeLong(long j, String str, long j5);

    private native boolean encodeLong_2(long j, String str, long j5, int i5);

    private native boolean encodeSet(long j, String str, String[] strArr);

    private native boolean encodeSet_2(long j, String str, String[] strArr, int i5);

    private native boolean encodeString(long j, String str, String str2);

    private native boolean encodeString_2(long j, String str, String str2, int i5);

    public static void f(String str) {
        StackTraceElement stackTraceElement = Thread.currentThread().getStackTrace()[r0.length - 1];
        Integer num = (Integer) f6816b.get(a.f18065e);
        mmkvLogImp(num == null ? 0 : num.intValue(), stackTraceElement.getFileName(), stackTraceElement.getLineNumber(), stackTraceElement.getMethodName(), str);
    }

    private static native long getDefaultMMKV(int i5, String str);

    private static native long getMMKVWithAshmemFD(String str, int i5, int i6, String str2);

    private static native long getMMKVWithID(String str, int i5, String str2, String str3, long j);

    private static native long getMMKVWithIDAndSize(String str, int i5, int i6, String str2);

    private native boolean isCompareBeforeSetEnabled();

    @FastNative
    private native boolean isEncryptionEnabled();

    @FastNative
    private native boolean isExpirationEnabled();

    public static native boolean isFileValid(String str, String str2);

    private static native void jniInitialize(String str, String str2, int i5, boolean z5);

    private static void mmkvLogImp(int i5, String str, int i6, String str2, String str3) {
        int ordinal = f6817c[i5].ordinal();
        if (ordinal == 0) {
            Log.d("MMKV", str3);
            return;
        }
        if (ordinal == 1) {
            Log.i("MMKV", str3);
        } else if (ordinal == 2) {
            Log.w("MMKV", str3);
        } else {
            if (ordinal != 3) {
                return;
            }
            Log.e("MMKV", str3);
        }
    }

    @FastNative
    private native void nativeEnableCompareBeforeSet();

    private static void onContentChangedByOuterProcess(String str) {
    }

    public static native void onExit();

    private static int onMMKVCRCCheckFail(String str) {
        StringBuilder sb2 = new StringBuilder("Recover strategic for ");
        sb2.append(str);
        sb2.append(" is ");
        b bVar = b.f18070d;
        sb2.append(bVar);
        f(sb2.toString());
        Integer num = (Integer) a.get(bVar);
        if (num == null) {
            return 0;
        }
        return num.intValue();
    }

    private static int onMMKVFileLengthError(String str) {
        StringBuilder sb2 = new StringBuilder("Recover strategic for ");
        sb2.append(str);
        sb2.append(" is ");
        b bVar = b.f18070d;
        sb2.append(bVar);
        f(sb2.toString());
        Integer num = (Integer) a.get(bVar);
        if (num == null) {
            return 0;
        }
        return num.intValue();
    }

    public static native int pageSize();

    public static native boolean removeStorage(String str, String str2);

    private native void removeValueForKey(long j, String str);

    public static native long restoreAllFromDirectory(String str);

    public static native boolean restoreOneMMKVFromDirectory(String str, String str2, String str3);

    private static native void setCallbackHandler(boolean z5, boolean z6);

    private static native void setLogLevel(int i5);

    private static native void setWantsContentChangeNotify(boolean z5);

    private native void sync(boolean z5);

    private native long totalSize(long j);

    private native int valueSize(long j, String str, boolean z5);

    public static native String version();

    private native int writeValueToNB(long j, String str, long j5, int i5);

    public final String a(String str) {
        return decodeString(this.nativeHandle, str, null);
    }

    @Override // android.content.SharedPreferences.Editor
    public final void apply() {
        sync(false);
    }

    public native int ashmemFD();

    public native int ashmemMetaFD();

    public final void c(String str, String str2) {
        encodeString(this.nativeHandle, str, str2);
    }

    public native void checkContentChangedByOuterProcess();

    public native void checkReSetCryptKey(String str);

    @Override // android.content.SharedPreferences.Editor
    public final SharedPreferences.Editor clear() {
        clearAll();
        return this;
    }

    public native void clearAll();

    public native void clearAllWithKeepingSpace();

    public native void clearMemoryCache();

    public native void close();

    @Override // android.content.SharedPreferences.Editor
    public final boolean commit() {
        sync(true);
        return true;
    }

    @Override // android.content.SharedPreferences
    public final boolean contains(String str) {
        return containsKey(this.nativeHandle, str);
    }

    public native String cryptKey();

    public native boolean disableAutoKeyExpire();

    public native void disableCompareBeforeSet();

    public final void e(String str) {
        removeValueForKey(this.nativeHandle, str);
    }

    @Override // android.content.SharedPreferences
    public final SharedPreferences.Editor edit() {
        return this;
    }

    public native boolean enableAutoKeyExpire(int i5);

    @Override // android.content.SharedPreferences
    public final Map getAll() {
        throw new UnsupportedOperationException("Intentionally Not Supported. Use allKeys() instead, getAll() not implement because type-erasure inside mmkv");
    }

    @Override // android.content.SharedPreferences
    public final boolean getBoolean(String str, boolean z5) {
        return decodeBool(this.nativeHandle, str, z5);
    }

    @Override // android.content.SharedPreferences
    public final float getFloat(String str, float f2) {
        return decodeFloat(this.nativeHandle, str, f2);
    }

    @Override // android.content.SharedPreferences
    public final int getInt(String str, int i5) {
        return decodeInt(this.nativeHandle, str, i5);
    }

    @Override // android.content.SharedPreferences
    public final long getLong(String str, long j) {
        return decodeLong(this.nativeHandle, str, j);
    }

    @Override // android.content.SharedPreferences
    public final String getString(String str, String str2) {
        return decodeString(this.nativeHandle, str, str2);
    }

    @Override // android.content.SharedPreferences
    public final Set getStringSet(String str, Set set) {
        String[] decodeStringSet = decodeStringSet(this.nativeHandle, str);
        if (decodeStringSet != null) {
            try {
                Set set2 = (Set) HashSet.class.newInstance();
                set2.addAll(Arrays.asList(decodeStringSet));
                return set2;
            } catch (IllegalAccessException | InstantiationException unused) {
            }
        }
        return set;
    }

    public native void lock();

    public native String mmapID();

    @Override // android.content.SharedPreferences.Editor
    public final SharedPreferences.Editor putBoolean(String str, boolean z5) {
        encodeBool(this.nativeHandle, str, z5);
        return this;
    }

    @Override // android.content.SharedPreferences.Editor
    public final SharedPreferences.Editor putFloat(String str, float f2) {
        encodeFloat(this.nativeHandle, str, f2);
        return this;
    }

    @Override // android.content.SharedPreferences.Editor
    public final SharedPreferences.Editor putInt(String str, int i5) {
        encodeInt(this.nativeHandle, str, i5);
        return this;
    }

    @Override // android.content.SharedPreferences.Editor
    public final SharedPreferences.Editor putLong(String str, long j) {
        encodeLong(this.nativeHandle, str, j);
        return this;
    }

    @Override // android.content.SharedPreferences.Editor
    public final SharedPreferences.Editor putString(String str, String str2) {
        encodeString(this.nativeHandle, str, str2);
        return this;
    }

    @Override // android.content.SharedPreferences.Editor
    public final SharedPreferences.Editor putStringSet(String str, Set set) {
        encodeSet(this.nativeHandle, str, set == null ? null : (String[]) set.toArray(new String[0]));
        return this;
    }

    public native boolean reKey(String str);

    @Override // android.content.SharedPreferences
    public final void registerOnSharedPreferenceChangeListener(SharedPreferences.OnSharedPreferenceChangeListener onSharedPreferenceChangeListener) {
        throw new UnsupportedOperationException("Intentionally Not implement in MMKV");
    }

    @Override // android.content.SharedPreferences.Editor
    public final SharedPreferences.Editor remove(String str) {
        e(str);
        return this;
    }

    public native void removeValuesForKeys(String[] strArr);

    public native void trim();

    public native boolean tryLock();

    public native void unlock();

    @Override // android.content.SharedPreferences
    public final void unregisterOnSharedPreferenceChangeListener(SharedPreferences.OnSharedPreferenceChangeListener onSharedPreferenceChangeListener) {
        throw new UnsupportedOperationException("Intentionally Not implement in MMKV");
    }
}
