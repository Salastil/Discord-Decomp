package com.facebook.react.uimanager;

import a1.k;
import a3.e;
import android.content.Context;
import android.content.pm.PackageManager;
import android.util.Log;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableNativeMap;
import com.tencent.mmkv.MMKV;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CountDownLatch;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public class UIManagerConstantsCache {
    private static final UIManagerConstantsCache INSTANCE = new UIManagerConstantsCache();
    private static final String MMKV_KEY_BUBBLING = "UIManagerModuleBubbling_v1";
    private static final String MMKV_KEY_CONSTANTS = "UIManagerModuleConstants_v1";
    private static final String MMKV_KEY_VERSION = "UIManagerConstantsCacheVersion";
    private static final String TAG = "UIManagerConstantsCache";
    private Map<String, Object> cachedConstants = null;
    private Map<String, Object> cachedBubblingEventsTypes = null;
    private WritableNativeMap cachedNativeMap = null;
    private final CountDownLatch loadLatch = new CountDownLatch(1);
    private volatile boolean initCalled = false;
    private String cacheVersionName = null;

    private UIManagerConstantsCache() {
    }

    public static UIManagerConstantsCache getInstance() {
        return INSTANCE;
    }

    private static List<Object> jsonArrayToList(JSONArray jSONArray) {
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < jSONArray.length(); i5++) {
            Object obj = jSONArray.get(i5);
            if (obj == JSONObject.NULL) {
                arrayList.add(null);
            } else if ((obj instanceof Boolean) || (obj instanceof Number) || (obj instanceof String)) {
                arrayList.add(obj);
            } else if (obj instanceof JSONObject) {
                arrayList.add(jsonToMap((JSONObject) obj));
            } else {
                if (!(obj instanceof JSONArray)) {
                    StringBuilder r5 = e.r(i5, "Unsupported JSON array element at index ", ": ");
                    r5.append(obj.getClass());
                    throw new JSONException(r5.toString());
                }
                arrayList.add(jsonArrayToList((JSONArray) obj));
            }
        }
        return arrayList;
    }

    private static Map<String, Object> jsonToMap(JSONObject jSONObject) {
        HashMap hashMap = new HashMap();
        Iterator<String> keys = jSONObject.keys();
        while (keys.hasNext()) {
            String next = keys.next();
            Object obj = jSONObject.get(next);
            if (obj == JSONObject.NULL) {
                hashMap.put(next, null);
            } else if ((obj instanceof Boolean) || (obj instanceof Number) || (obj instanceof String)) {
                hashMap.put(next, obj);
            } else if (obj instanceof JSONObject) {
                hashMap.put(next, jsonToMap((JSONObject) obj));
            } else {
                if (!(obj instanceof JSONArray)) {
                    StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Unsupported JSON type in UIManager constants for key \"", next, "\": ");
                    m5.append(obj.getClass());
                    throw new JSONException(m5.toString());
                }
                hashMap.put(next, jsonArrayToList((JSONArray) obj));
            }
        }
        return hashMap;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:12:0x00af A[Catch: all -> 0x002b, TRY_LEAVE, TryCatch #6 {all -> 0x002b, blocks: (B:3:0x0006, B:5:0x0012, B:8:0x0019, B:9:0x0056, B:62:0x0060, B:63:0x0069, B:67:0x006d, B:70:0x007c, B:17:0x00ba, B:32:0x00c2, B:33:0x00cb, B:37:0x00cf, B:40:0x00e2, B:41:0x00de, B:45:0x00f6, B:19:0x0115, B:23:0x0119, B:30:0x0128, B:47:0x00f7, B:48:0x010d, B:56:0x0114, B:71:0x0078, B:75:0x0090, B:12:0x00af, B:16:0x00b3, B:60:0x012b, B:77:0x0091, B:78:0x00a7, B:86:0x00ae, B:87:0x002e, B:50:0x010e, B:51:0x0110, B:21:0x0116, B:22:0x0118, B:14:0x00b0, B:15:0x00b2, B:80:0x00a8, B:81:0x00aa), top: B:2:0x0006, inners: #0, #1, #3, #4, #5, #7 }] */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0115 A[Catch: all -> 0x002b, TRY_LEAVE, TryCatch #6 {all -> 0x002b, blocks: (B:3:0x0006, B:5:0x0012, B:8:0x0019, B:9:0x0056, B:62:0x0060, B:63:0x0069, B:67:0x006d, B:70:0x007c, B:17:0x00ba, B:32:0x00c2, B:33:0x00cb, B:37:0x00cf, B:40:0x00e2, B:41:0x00de, B:45:0x00f6, B:19:0x0115, B:23:0x0119, B:30:0x0128, B:47:0x00f7, B:48:0x010d, B:56:0x0114, B:71:0x0078, B:75:0x0090, B:12:0x00af, B:16:0x00b3, B:60:0x012b, B:77:0x0091, B:78:0x00a7, B:86:0x00ae, B:87:0x002e, B:50:0x010e, B:51:0x0110, B:21:0x0116, B:22:0x0118, B:14:0x00b0, B:15:0x00b2, B:80:0x00a8, B:81:0x00aa), top: B:2:0x0006, inners: #0, #1, #3, #4, #5, #7 }] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00c2 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0060 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ void lambda$init$0(String str) {
        String a;
        String a10;
        try {
            MMKV b10 = MMKV.b();
            String a11 = b10.a(MMKV_KEY_VERSION);
            if (a11 != null && a11.equals(str)) {
                Log.v(TAG, "UIManagerConstantsCache version matches: " + str);
                a = b10.a(MMKV_KEY_CONSTANTS);
                int i5 = 0;
                if (a == null) {
                    try {
                        Map<String, Object> jsonToMap = jsonToMap(new JSONObject(a));
                        synchronized (this) {
                            this.cachedConstants = jsonToMap;
                        }
                        StringBuilder sb2 = new StringBuilder("Background-loaded full UIManager constants (size=");
                        sb2.append(jsonToMap == null ? 0 : jsonToMap.size());
                        sb2.append(")");
                        Log.v(TAG, sb2.toString());
                    } catch (JSONException e9) {
                        Log.w(TAG, "Invalid JSON in MMKV (constants). Will regenerate.\n" + a, e9);
                        synchronized (this) {
                            this.cachedConstants = null;
                        }
                    }
                    a10 = b10.a(MMKV_KEY_BUBBLING);
                    if (a10 != null) {
                        synchronized (this) {
                            this.cachedBubblingEventsTypes = null;
                        }
                        Log.v(TAG, "No bubblingEventTypes found in MMKV.");
                        this.loadLatch.countDown();
                        return;
                    }
                    try {
                        Map<String, Object> jsonToMap2 = jsonToMap(new JSONObject(a10));
                        synchronized (this) {
                            this.cachedBubblingEventsTypes = jsonToMap2;
                        }
                        StringBuilder sb3 = new StringBuilder();
                        sb3.append("Background-loaded bubblingEventTypes (size=");
                        if (jsonToMap2 != null) {
                            i5 = jsonToMap2.size();
                        }
                        sb3.append(i5);
                        sb3.append(")");
                        Log.v(TAG, sb3.toString());
                    } catch (JSONException e10) {
                        Log.w(TAG, "Invalid JSON in MMKV (bubblingEventTypes). Will regenerate.\n" + a10, e10);
                        synchronized (this) {
                            this.cachedBubblingEventsTypes = null;
                        }
                    }
                    this.loadLatch.countDown();
                    return;
                }
                synchronized (this) {
                    this.cachedConstants = null;
                }
                Log.v(TAG, "No UIManager constants found in MMKV.");
                a10 = b10.a(MMKV_KEY_BUBBLING);
                if (a10 != null) {
                }
            }
            Log.w(TAG, "UIManagerConstantsCache version mismatch! Expected: " + str + ", found: " + a11 + ". Will regenerate constants and bubblingEventTypes.");
            b10.e(MMKV_KEY_CONSTANTS);
            b10.e(MMKV_KEY_BUBBLING);
            a = b10.a(MMKV_KEY_CONSTANTS);
            int i52 = 0;
            if (a == null) {
            }
        } catch (Throwable th2) {
            this.loadLatch.countDown();
            throw th2;
        }
    }

    private static JSONArray listToJsonArray(List<Object> list) {
        JSONArray jSONArray = new JSONArray();
        for (Object obj : list) {
            if (obj == null) {
                jSONArray.put(JSONObject.NULL);
            } else if (obj instanceof String) {
                jSONArray.put((String) obj);
            } else if (obj instanceof Boolean) {
                jSONArray.put((Boolean) obj);
            } else if (obj instanceof Number) {
                jSONArray.put((Number) obj);
            } else if (obj instanceof Map) {
                jSONArray.put(mapToJson((Map) obj));
            } else {
                if (!(obj instanceof List)) {
                    throw new JSONException("Unsupported list element type: " + obj.getClass());
                }
                jSONArray.put(listToJsonArray((List) obj));
            }
        }
        return jSONArray;
    }

    private static JSONObject mapToJson(Map<String, Object> map) {
        JSONObject jSONObject = new JSONObject();
        for (Map.Entry<String, Object> entry : map.entrySet()) {
            String key = entry.getKey();
            Object value = entry.getValue();
            if (value == null) {
                jSONObject.put(key, JSONObject.NULL);
            } else if (value instanceof String) {
                jSONObject.put(key, (String) value);
            } else if (value instanceof Boolean) {
                jSONObject.put(key, (Boolean) value);
            } else if (value instanceof Number) {
                jSONObject.put(key, (Number) value);
            } else if (value instanceof Map) {
                jSONObject.put(key, mapToJson((Map) value));
            } else {
                if (!(value instanceof List)) {
                    StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Unsupported value type for key \"", key, "\": ");
                    m5.append(value.getClass());
                    throw new JSONException(m5.toString());
                }
                jSONObject.put(key, listToJsonArray((List) value));
            }
        }
        return jSONObject;
    }

    public Map<String, Object> getCachedBubblingEventsTypes() {
        Map<String, Object> map;
        try {
            this.loadLatch.await();
            synchronized (this) {
                map = this.cachedBubblingEventsTypes;
            }
            return map;
        } catch (InterruptedException unused) {
            Thread.currentThread().interrupt();
            Log.w(TAG, "getCachedBubblingEventsTypes() interrupted while waiting.");
            return null;
        }
    }

    public Map<String, Object> getCachedConstants() {
        Map<String, Object> map;
        try {
            this.loadLatch.await();
            synchronized (this) {
                map = this.cachedConstants;
            }
            return map;
        } catch (InterruptedException unused) {
            Thread.currentThread().interrupt();
            Log.w(TAG, "getCachedConstants() interrupted while waiting.");
            return null;
        }
    }

    public WritableNativeMap getUIManagerConstantsAsWritableMap() {
        WritableNativeMap writableNativeMap;
        Map<String, Object> map;
        try {
            this.loadLatch.await();
            synchronized (this) {
                try {
                    if (this.cachedNativeMap == null && (map = this.cachedConstants) != null) {
                        this.cachedNativeMap = Arguments.makeNativeMap((Map<String, ? extends Object>) map);
                    }
                    writableNativeMap = this.cachedNativeMap;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            return writableNativeMap;
        } catch (InterruptedException unused) {
            Thread.currentThread().interrupt();
            Log.w(TAG, "getUIManagerConstantsAsWritableMap() interrupted while waiting.");
            return null;
        }
    }

    public synchronized void init(Context context) {
        if (this.initCalled) {
            return;
        }
        this.initCalled = true;
        try {
            this.cacheVersionName = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
            MMKV.d(context.getApplicationContext());
            new Thread(new k(26, this, this.cacheVersionName), "UIManagerConstantsCache-Loader").start();
        } catch (PackageManager.NameNotFoundException e9) {
            Log.e(TAG, "Failed to get app version name; continuing without caching!", e9);
        }
    }

    public void saveConstantsAndBubblingEventsTypes(Map<String, Object> map, Map<String, Object> map2) {
        if (map == null) {
            return;
        }
        if (this.cacheVersionName == null) {
            throw new IllegalStateException("UIManagerConstantsCache not initialized! Call init(...) first.");
        }
        try {
            JSONObject mapToJson = mapToJson(map);
            long currentTimeMillis = System.currentTimeMillis();
            MMKV.b().c(MMKV_KEY_CONSTANTS, mapToJson.toString());
            Log.v(TAG, "Saved UIManager constants to MMKV in " + (System.currentTimeMillis() - currentTimeMillis) + "ms");
        } catch (JSONException e9) {
            Log.e(TAG, "Failed to JSON-serialize UIManager constants; not caching.", e9);
        }
        if (map2 != null) {
            try {
                JSONObject mapToJson2 = mapToJson(map2);
                long currentTimeMillis2 = System.currentTimeMillis();
                MMKV.b().c(MMKV_KEY_BUBBLING, mapToJson2.toString());
                Log.v(TAG, "Saved bubblingEventTypes to MMKV in " + (System.currentTimeMillis() - currentTimeMillis2) + "ms");
            } catch (JSONException e10) {
                Log.e(TAG, "Failed to JSON-serialize bubblingEventTypes; not caching.", e10);
            }
        }
        MMKV.b().c(MMKV_KEY_VERSION, this.cacheVersionName);
    }
}
